#include "hw10_header.h"

void swapReference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swapPointer(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

bool calculateSum(const double* arr, int arrSize, double& sum) {
	if (arrSize <= 0) {
		return false;
	}
	sum = 0.0;

	for (int i = 0; i < arrSize; i++) {
		sum += arr[i];
	}
	return true;
}

bool find(const int* arr, int size, int elem) {
	const int* end = arr + size; 

	for (const int* current = arr; current < end; current++) {
		if (*current == elem) {
			return true;
		}
	}
	return false;
}