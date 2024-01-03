#include "hw9_header.h"
#include <iostream>
#include <cctype>

void translateArray(int numbers[], int size) {
	
	for (int i = 0; i < 10; i++) {

		std::cout << "Enter array value for index " << i << ": ";
		std::cin >> numbers[i];

		if (numbers[i] > 0) {
			numbers[i] *= 2;
		}
		else {
			numbers[i] *= 0;
		}
	}

	std::cout << "Your array is: ";
	for (int i = 0; i < 10; i++) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
}

void toUppercase(char str[]) {
	for (int i = 0; str[i] != '\0' && i < 100; i++) {
		if (isalpha(str[i])) str[i] = toupper(str[i]);
	}

	std::cout << "Your string array is: " << str << std::endl;
}

bool isPalindrome(const char str[]) {
	int length = 0;
	while (str[length] != '\0') {
		length++;
	}

	int start = 0;
	int end = length - 1;

	while (start < end) {
		if (str[start] != str[end]) {
			std::cout << "false" << std::endl;
			return 0;
		}
		start++;
		end--;
	}

	std::cout << "true" << std::endl;
	return 1;
}

void parseStringLetter(const char str[], int& vowelsCount, int& constonantsCount) {
	for (int i = 0; str[i] != '\0' && i < 100; i++) {
		char lowerCase = tolower(str[i]);
		if (isalpha(str[i]) && (lowerCase == 'a' || lowerCase == 'e' || lowerCase == 'i' || lowerCase == 'o' 
			|| lowerCase == 'u' || lowerCase == 'y')) {
			vowelsCount++;
		}
		else if (isalpha(str[i])) {
			constonantsCount++;
		}
	}
	std::cout << "Your string has " << vowelsCount << " vowels and " << constonantsCount << " constonants." << std::endl;
}

bool isEqual(const char str1[], const char str2[]) {
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			std::cout << "false" << std::endl;
			return 0;
		}
		i++;
	}
	if (str1[i] != '\0' || str2[i] != '\0') {
		std::cout << "false" << std::endl;
		return 0;
	}

	std::cout << "true" << std::endl;
	return 1;
}