#include "hw8_header_recu.h"
#include <iostream>

int factorialRecursive(int f) {

	if (f == 0 || f == 1) return 1;
	
	if(f < 0){
		std::cout << "Please enter a number greater than ";
		return 0;
	}
	return f * factorialRecursive(f - 1);
	
}

int fromBigToSmallRecursive(int a) {
	if (a < 0) {
		std::cout << "Wrong number!" << std::endl;
		return 0;
	}
	else {
		std::cout << a << " ";
		if (a > 0) {
			fromBigToSmallRecursive(a - 1);
		}
	}
}

int fromSmallToBigRecursive(int a) {
	if (a < 0) {
		std::cout << "Wrong number!" << std::endl;
		return 0;
	}

	fromSmallToBigRecursive(a - 1);
	std::cout << a << " ";
}