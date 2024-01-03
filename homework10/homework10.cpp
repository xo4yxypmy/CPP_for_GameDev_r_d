#include <iostream>
#include "hw10_header.h"

int main()
{
	//task 1
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	std::cout << "Enter a number:";
	std::cin >> a;
	std::cout << "Enter b number:";
	std::cin >> b;

	swapReference(a, b);
	std::cout << "a: " << a << ", b: " << b << std::endl;

	std::cout << "Enter c number:";
	std::cin >> c;
	std::cout << "Enter d number:";
	std::cin >> d;
		
	swapPointer(&c, &d);
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << std::endl;
	//task 2
	const int arrSize = 5;
	double myArray[arrSize] = { 1.5, 2.0, 0.4, 5.7, 3.2 };
	double resultSum = 0.0;

	calculateSum(myArray, arrSize, resultSum);
	std::cout << "Sum of array elements: " << resultSum << std::endl;
	std::cout << std::endl;
	//task 3
	const int arrLength = 7;
	int newArray[arrLength] = { 1, 2, 3, 4, 5, 6, 7 };
	int searchElement = 0;

	std::cout << "Enter the number to search: ";
	std::cin >> searchElement;

	if (find(newArray, arrLength, searchElement)) {
		std::cout << "Number found in the array." << std::endl;
	}
	else {
		std::cout << "Number not found in the array" << std::endl;
	}

	std::cout << std::endl;
	return 0;
} 