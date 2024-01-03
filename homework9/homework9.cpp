#include <iostream>
#include "hw9_header.h"

int main()
{
	const int size = 10;
	const int maxLength = 100;
	
	//task 1
	int numbers[size];

	translateArray(numbers, size);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << std::endl;

	//task 2
	char myString[maxLength];
	std::cout << "Enter your string: ";
	std::cin.getline(myString, maxLength);

	toUppercase(myString);
	std::cout << std::endl;

	//task 3
	char palindromeString[maxLength];
	std::cout << "Enter your string: ";
	std::cin.getline(palindromeString, maxLength);

	isPalindrome(palindromeString);
	std::cout << std::endl;

	//task 4
	char countLetters[maxLength];
	std::cout << "Enter your string: ";
	std::cin.getline(countLetters, maxLength);

	int vowelsCount = 0;
	int constonantsCount = 0;

	parseStringLetter(countLetters, vowelsCount, constonantsCount);
	std::cout << std::endl;

	//task 5
	char string1[maxLength];
	char string2[maxLength];
	std::cout << "Enter your first string: ";
	std::cin.getline(string1, maxLength);
	std::cout << "Enter your second string: ";
	std::cin.getline(string2, maxLength);

	isEqual(string1, string2);
	std::cout << std::endl;
}
