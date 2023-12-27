#include <iostream>
#include "hw8_header_func.h"
#include "hw8_header_recu.h"

int main()
{
	//task 1
	int n = 0;
	std::cout << " Enter the number of values: ";
	std::cin >> n;
	
	int positiveCount = 0;
	int negativeCount = 0;
	int zeroCount = 0;

	countValue(n, positiveCount, negativeCount, zeroCount);

	std::cout << " Positive: " << positiveCount << ", negative: " 
		<< negativeCount << ", zeroes: " << zeroCount << std::endl;
			
	//task 2
	int userNumberT2 = 0;
	std::cin >> userNumberT2;

	int resultFactorialLoop = factorialLoop(userNumberT2);
	std::cout << resultFactorialLoop << std::endl;

	int resultFactorialRecu = factorialRecursive(userNumberT2);
	std::cout << resultFactorialRecu << std::endl;
	
	//task 3
	int userNumberT3 = 0;
	std::cin >> userNumberT3;

	fromBigToSmallLoop(userNumberT3);
	fromSmallToBigLoop(userNumberT3);
	fromBigToSmallRecursive(userNumberT3);
	fromSmallToBigRecursive(userNumberT3);
	
	return 0;
}
