#include <iostream>
#include "mnist_cnn_model.h"
#include "data.h"
#include "mnist_cnn_toplevel.h"

void mnist_cnn_model_wraper(float* data /* float[1][1][28][28] */) {
	float* ret = (float*) new float[1][10];
	mnist_cnn_toplevel(
		ret,
		(float*)data,
		(float*)net0_conv0_weight,
		(float*)net0_conv0_bias,
		(float*)net0_conv1_weight,
		(float*)net0_conv1_bias,
		(float*)net0_dense0_weight,
		(float*)net0_dense0_bias);

	float highest_score=0;
	int highest_score_id=0;
	for(int i=0;i<10;++i) {
		const float score = ret[i];
		std::cout << i << " : "  << ret[i] << "\n";
		if (score > highest_score) {
			highest_score_id = i;
			highest_score = score;
		}
	}
	std::cout << "classified as : " << highest_score_id << "\n";

	delete[] ret;
}

int main() {
	mnist_cnn_model_wraper((float*)data);
	return 0;
}
