#include <cmath>
#include <cstdlib>
inline float max(float a, float b){return std::fmax(a,b);}
void fuse_conv2d( void* arg0, void* arg1, void* arg2, void* arg3){
  float* input0 = (float*)arg0;
  float* input1 = (float*)arg1;
  float* input2 = (float*)arg2;
  float* compute_compute_add = (float*)arg3;
  void* pad_temp = malloc((unsigned long)((((4 * 1) * 1) * 28) * 28));
  void* compute = malloc((unsigned long)((((4 * 1) * 6) * 24) * 24));
  void* compute1 = malloc((unsigned long)(((4 * 6) * 1) * 1));
  for (int i2 = 0; i2 < 28; ++i2) {
    for (int i3 = 0; i3 < 28; ++i3) {
      (( float*)pad_temp)[((i2 * 28) + i3)] = input0[((i2 * 28) + i3)];
    }
  }
  for (int ff = 0; ff < 6; ++ff) {
    for (int yy = 0; yy < 24; ++yy) {
      for (int xx = 0; xx < 24; ++xx) {
        (( float*)compute)[((((ff * 24) + yy) * 24) + xx)] = 0.000000e+00f;
        for (int ry = 0; ry < 5; ++ry) {
          for (int rx = 0; rx < 5; ++rx) {
            (( float*)compute)[((((ff * 24) + yy) * 24) + xx)] = ((( float*)compute)[((((ff * 24) + yy) * 24) + xx)] + ((( float*)pad_temp)[((((yy * 28) + xx) + (ry * 28)) + rx)] * input1[((((ff * 5) + ry) * 5) + rx)]));
          }
        }
      }
    }
  }
  for (int i0 = 0; i0 < 6; ++i0) {
    (( float*)compute1)[i0] = input2[i0];
  }
  for (int i1 = 0; i1 < 6; ++i1) {
    for (int i21 = 0; i21 < 24; ++i21) {
      for (int i31 = 0; i31 < 24; ++i31) {
        compute_compute_add[((((i1 * 24) + i21) * 24) + i31)] = ((( float*)compute)[((((i1 * 24) + i21) * 24) + i31)] + (( float*)compute1)[i1]);
      }
    }
  }
  free(compute1);
  free(compute);
  free(pad_temp);
}

void fuse_relu( void* arg0, void* arg1){
  float* input0 = (float*)arg0;
  float* tensor = (float*)arg1;
  for (int ax1 = 0; ax1 < 6; ++ax1) {
    for (int ax2 = 0; ax2 < 24; ++ax2) {
      for (int ax3 = 0; ax3 < 24; ++ax3) {
        tensor[((((ax1 * 24) + ax2) * 24) + ax3)] = max(input0[((((ax1 * 24) + ax2) * 24) + ax3)], 0.000000e+00f);
      }
    }
  }
}

void fuse_max_pool2d( void* arg0, void* arg1){
  float* input0 = (float*)arg0;
  float* tensor = (float*)arg1;
  void* pad_temp = malloc((unsigned long)((((4 * 1) * 6) * 24) * 24));
  for (int ax1 = 0; ax1 < 6; ++ax1) {
    for (int ax2 = 0; ax2 < 24; ++ax2) {
      for (int ax3 = 0; ax3 < 24; ++ax3) {
        (( float*)pad_temp)[((((ax1 * 24) + ax2) * 24) + ax3)] = input0[((((ax1 * 24) + ax2) * 24) + ax3)];
      }
    }
  }
  for (int ax11 = 0; ax11 < 6; ++ax11) {
    for (int ax21 = 0; ax21 < 12; ++ax21) {
      for (int ax31 = 0; ax31 < 12; ++ax31) {
        tensor[((((ax11 * 12) + ax21) * 12) + ax31)] = -3.402823e+38f;
        for (int rv = 0; rv < 2; ++rv) {
          for (int rv1 = 0; rv1 < 2; ++rv1) {
            tensor[((((ax11 * 12) + ax21) * 12) + ax31)] = max(tensor[((((ax11 * 12) + ax21) * 12) + ax31)], (( float*)pad_temp)[(((((((ax11 * 12) + ax21) * 24) + ax31) + (rv * 12)) * 2) + rv1)]);
          }
        }
      }
    }
  }
  free(pad_temp);
}

void fuse_conv2d_1( void* arg0, void* arg1, void* arg2, void* arg3){
  float* input0 = (float*)arg0;
  float* input1 = (float*)arg1;
  float* input2 = (float*)arg2;
  float* compute_compute_add = (float*)arg3;
  void* pad_temp = malloc((unsigned long)((((4 * 1) * 6) * 12) * 12));
  void* compute = malloc((unsigned long)((((4 * 1) * 16) * 8) * 8));
  void* compute1 = malloc((unsigned long)(((4 * 16) * 1) * 1));
  for (int i1 = 0; i1 < 6; ++i1) {
    for (int i2 = 0; i2 < 12; ++i2) {
      for (int i3 = 0; i3 < 12; ++i3) {
        (( float*)pad_temp)[((((i1 * 12) + i2) * 12) + i3)] = input0[((((i1 * 12) + i2) * 12) + i3)];
      }
    }
  }
  for (int ff = 0; ff < 16; ++ff) {
    for (int yy = 0; yy < 8; ++yy) {
      for (int xx = 0; xx < 8; ++xx) {
        (( float*)compute)[((((ff * 8) + yy) * 8) + xx)] = 0.000000e+00f;
        for (int rc = 0; rc < 6; ++rc) {
          for (int ry = 0; ry < 5; ++ry) {
            for (int rx = 0; rx < 5; ++rx) {
              (( float*)compute)[((((ff * 8) + yy) * 8) + xx)] = ((( float*)compute)[((((ff * 8) + yy) * 8) + xx)] + ((( float*)pad_temp)[(((((yy * 12) + xx) + (rc * 144)) + (ry * 12)) + rx)] * input1[((((((ff * 6) + rc) * 5) + ry) * 5) + rx)]));
            }
          }
        }
      }
    }
  }
  for (int i0 = 0; i0 < 16; ++i0) {
    (( float*)compute1)[i0] = input2[i0];
  }
  for (int i11 = 0; i11 < 16; ++i11) {
    for (int i21 = 0; i21 < 8; ++i21) {
      for (int i31 = 0; i31 < 8; ++i31) {
        compute_compute_add[((((i11 * 8) + i21) * 8) + i31)] = ((( float*)compute)[((((i11 * 8) + i21) * 8) + i31)] + (( float*)compute1)[i11]);
      }
    }
  }
  free(compute1);
  free(compute);
  free(pad_temp);
}

void fuse_relu_1( void* arg0, void* arg1){
  float* input0 = (float*)arg0;
  float* tensor = (float*)arg1;
  for (int ax1 = 0; ax1 < 16; ++ax1) {
    for (int ax2 = 0; ax2 < 8; ++ax2) {
      for (int ax3 = 0; ax3 < 8; ++ax3) {
        tensor[((((ax1 * 8) + ax2) * 8) + ax3)] = max(input0[((((ax1 * 8) + ax2) * 8) + ax3)], 0.000000e+00f);
      }
    }
  }
}

void fuse_max_pool2d_1( void* arg0, void* arg1){
  float* input0 = (float*)arg0;
  float* tensor = (float*)arg1;
  void* pad_temp = malloc((unsigned long)((((4 * 1) * 16) * 8) * 8));
  for (int ax1 = 0; ax1 < 16; ++ax1) {
    for (int ax2 = 0; ax2 < 8; ++ax2) {
      for (int ax3 = 0; ax3 < 8; ++ax3) {
        (( float*)pad_temp)[((((ax1 * 8) + ax2) * 8) + ax3)] = input0[((((ax1 * 8) + ax2) * 8) + ax3)];
      }
    }
  }
  for (int ax11 = 0; ax11 < 16; ++ax11) {
    for (int ax21 = 0; ax21 < 4; ++ax21) {
      for (int ax31 = 0; ax31 < 4; ++ax31) {
        tensor[((((ax11 * 4) + ax21) * 4) + ax31)] = -3.402823e+38f;
        for (int rv = 0; rv < 2; ++rv) {
          for (int rv1 = 0; rv1 < 2; ++rv1) {
            tensor[((((ax11 * 4) + ax21) * 4) + ax31)] = max(tensor[((((ax11 * 4) + ax21) * 4) + ax31)], (( float*)pad_temp)[(((((((ax11 * 4) + ax21) * 8) + ax31) + (rv * 4)) * 2) + rv1)]);
          }
        }
      }
    }
  }
  free(pad_temp);
}

void fuse_reshape_flatten( void* arg0, void* arg1){
  float* input0 = (float*)arg0;
  float* tensor = (float*)arg1;
  for (int ax1 = 0; ax1 < 256; ++ax1) {
    tensor[ax1] = input0[(((ax1 / 16) * 16) + ((((ax1 / 4) % 4) * 4) + (ax1 % 4)))];
  }
}

void fuse_dense( void* arg0, void* arg1, void* arg2, void* arg3){
  float* input0 = (float*)arg0;
  float* input1 = (float*)arg1;
  float* input2 = (float*)arg2;
  float* compute = (float*)arg3;
  void* compute1 = malloc((unsigned long)((4 * 1) * 10));
  for (int j = 0; j < 10; ++j) {
    (( float*)compute1)[j] = 0.000000e+00f;
    for (int k = 0; k < 256; ++k) {
      (( float*)compute1)[j] = ((( float*)compute1)[j] + (input0[k] * input1[((j * 256) + k)]));
    }
  }
  for (int j1 = 0; j1 < 10; ++j1) {
    compute[j1] = ((( float*)compute1)[j1] + input2[j1]);
  }
  free(compute1);
}

