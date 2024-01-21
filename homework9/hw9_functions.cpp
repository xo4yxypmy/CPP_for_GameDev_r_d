#include "hw9_header.h"
#include <iostream>
#include <cctype>
#include <cstring>

void printArray(int numbers[], int size) {
	std::cout << "Your array is: ";
	for (int i = 0; i < size; i++) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
}

void translateArray(int numbers[], int size) {
	
	for (int i = 0; i < size; i++) {

		if (numbers[i] > 0) {
			numbers[i] *= 2;
		}
		else {
			numbers[i] *= 0;
		}
	}
}

void toUppercase(char str[]) {
	for (int i = 0; str[i] != '\0' && i < 100; i++) {
		if (isalpha(str[i])) str[i] = toupper(str[i]);
	}
}

bool isPalindrome(const char str[]) {
	int length = strlen(str);
	
	int start = 0;
	int end = length - 1;

	while (start < end) {
		if (str[start] != str[end]) {
			return false;
		}
		start++;
		end--;
	}
	return true;
}

void parseStringLetter(const char str[], int& vowelsCount, int& constonantsCount) {
	for (int i = 0; str[i] != '\0' && i < 100; i++) {
		char lowerCase = tolower(str[i]);
		if (isalpha(str[i])) {
			if (lowerCase == 'a' || lowerCase == 'e' || lowerCase == 'i' || lowerCase == 'o'
				|| lowerCase == 'u' || lowerCase == 'y') {
				vowelsCount++;
			}
			else {
				constonantsCount++;
			}
		}
	}
}

bool isEqual(const char str1[], const char str2[]) {
	int i = 0;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return false;
		}
		i++;
	}
	return !(str1[i] != '\0' || str2[i] != '\0');
}