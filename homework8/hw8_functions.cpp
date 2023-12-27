#include <iostream>
#include "hw8_header_func.h"

void countValue(int n, int& positiveCount, int& negativCount, int& zeroCount) {
	for (int i = 0; i < n; ++i) {
		int value = 0;
		std::cout << "Enter value " << (i + 1) << ": ";
		std::cin >> value;

		if (value > 0) {
			positiveCount++;
		}
		else if (value < 0) {
			negativCount++;
		}
		else {
			zeroCount++;
		}
	}
}

int factorialLoop(int f) {
	if (f < 0) {
		std::cout << "Please enter a number greater than ";
		return 0;
	}
	
	int nFactorial = 1;
	for (int i = 1; i <= f; ++i) {
		nFactorial *= i;
	}
	return nFactorial;
	
}

int fromBigToSmallLoop(int a) {
	if (a < 0) {
		std::cout << "Wrong number!" << std::endl;
		return 0;
	}
	else {
		for (int i = a; i >= 0; --i) {
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
}

int fromSmallToBigLoop(int a) {
	if (a < 0) {
		std::cout << "Wrong number!" << std::endl;
		return 0;
	}
	else {
		for (int i = 0; i <= a; ++i) {
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
}