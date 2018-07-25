#include "mnist_cnn_Op.h"
void mnist_cnn_toplevel(
float* ret /* float[1][10] */,
	const float* data /* float[1][1][28][28] */ ,
	const float* net0_conv0_weight /* float[6][1][5][5] */ ,
	const float* net0_conv0_bias /* float[6] */ ,
	const float* net0_conv1_weight /* float[16][6][5][5] */ ,
	const float* net0_conv1_bias /* float[16] */ ,
	const float* net0_dense0_weight /* float[10][256] */ ,
	const float* net0_dense0_bias /* float[10] */ )
{
float* LocalBuf0 = new float[3456];
float* LocalBuf1 = new float[3456];
// float[1][6][24][24]
float* conv2d0 = LocalBuf0;
// tvmop: 3 : conv2d0
fuse_conv2d((void*) data,(void*) net0_conv0_weight,(void*) net0_conv0_bias,(void*) conv2d0);
// float[1][6][24][24]
float* relu0 = LocalBuf1;
// tvmop: 4 : relu0
fuse_relu((void*) conv2d0,(void*) relu0);
// float[1][6][12][12]
float* max_pool2d0 = LocalBuf0;
// tvmop: 5 : max_pool2d0
fuse_max_pool2d((void*) relu0,(void*) max_pool2d0);
// float[1][16][8][8]
float* conv2d1 = LocalBuf1;
// tvmop: 8 : conv2d1
fuse_conv2d_1((void*) max_pool2d0,(void*) net0_conv1_weight,(void*) net0_conv1_bias,(void*) conv2d1);
// float[1][16][8][8]
float* relu1 = LocalBuf0;
// tvmop: 9 : relu1
fuse_relu_1((void*) conv2d1,(void*) relu1);
// float[1][16][4][4]
float* max_pool2d1 = LocalBuf1;
// tvmop: 10 : max_pool2d1
fuse_max_pool2d_1((void*) relu1,(void*) max_pool2d1);
// float[1][256]
float* flatten0 = LocalBuf0;
// tvmop: 11 : flatten0
fuse_reshape_flatten((void*) max_pool2d1,(void*) flatten0);
// tvmop: 14 : dense0
fuse_dense((void*) flatten0,(void*) net0_dense0_weight,(void*) net0_dense0_bias,(void*) ret);

delete[] LocalBuf0;
delete[] LocalBuf1;
};
