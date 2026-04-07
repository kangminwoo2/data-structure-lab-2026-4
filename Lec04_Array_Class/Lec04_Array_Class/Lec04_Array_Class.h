#pragma once
#include<iostream>

#define HEIGHT 8
#define WIDTH 8

class ArrayMaxClass {
private:
	int image[HEIGHT][WIDTH];

public:
	ArrayMaxClass(int x[HEIGHT][WIDTH]) {
		for (int i = 0; i < HEIGHT; i++) {
			for (int j = 0; j < HEIGHT; j++) {
				image[i][j] = x[i][j];
			}
		}
	}

	int getMaxBrightness() {
		int max = image[0][0];

		for (int i = 0; i < HEIGHT; i++) {
			for (int j = 0; j < WIDTH; j++) {
				if (image[i][j] > max) {
					max = image[i][j];
				}
			}
		}
		return max;
	}

};