#include "hw8_header_recu.h"
#include <iostream>

int factorialRecu(int f) {

	if (f == 0 || f == 1) {
		return 1;
	}
	else if(f < 0){
		std::cout << "Please enter a number greater than ";
		return 0;
	}
	else {		
		return f * factorialRecu(f - 1);
	}
	
}

int fromBigToSmallRecu(int a) {
	if (a < 0) {
		std::cout << "Wrong number!" << std::endl;
		return 0;
	}
	else {
		std::cout << a << " ";
		if (a > 0) {
			fromBigToSmallRecu(a - 1);
		}
	}
}

int fromSmallToBigRecu(int a) {
	if (a < 0) {
		std::cout << "Wrong number!" << std::endl;
		return 0;
	}
	else {		
		if (a > 0) {
			fromSmallToBigRecu(a - 1);
		}
		std::cout << a << " ";
	}
}