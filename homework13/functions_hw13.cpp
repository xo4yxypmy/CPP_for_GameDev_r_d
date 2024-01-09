#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <string>
#include <iomanip>
#include <cctype>
#include "header_h13.h"

int getDay(const std::tm* tmObj)
{
	return tmObj->tm_mday;
}

int getMonth(const std::tm* tmObj)
{
	return tmObj->tm_mon + 1;
}

int getYear(const std::tm* tmObj)
{
	return tmObj->tm_year + 1900;
}

std::string getRandomWord(int generatedNum) {
	std::ifstream file("WordsDataBase.txt");
	if (!file.is_open()) {
		std::cerr << "Error opening file." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string word;
	for (int i = 0; i <= generatedNum; ++i) {
		if (!std::getline(file, word)) {
			std::cerr << "Error reading from file." << std::endl;
			exit(EXIT_FAILURE);
		}
	}

	file.close();
	return word;
}

void displayWordProgress(const std::string& targetWord, const std::string& guessedWord) {
	std::cout << "Guess: ";

	for (std::size_t i = 0; i < targetWord.length(); ++i) {
		if (guessedWord[i] == targetWord[i]) {
			std::cout << static_cast<char>(std::toupper(guessedWord[i]));
		}
		else if (targetWord.find(guessedWord[i]) != std::string::npos) {
			std::cout << static_cast<char>(std::tolower(guessedWord[i]));
		}
		else
		{
			std::cout << "*";
		}
	}
	std::cout << std::endl;
}

void writeCurrentDateToFile(std::ofstream& outputFile, std::tm* now) {
	outputFile << std::setfill('0') << std::setw(2) << now->tm_mday << "-"
		<< std::setfill('0') << std::setw(2) << now->tm_mon + 1 << "-"
		<< now->tm_year + 1900 << std::endl;
}

bool isCurrentDateInFile(const std::string& fileName, std::tm* now) {
	std::ifstream inputFile(fileName);
	if (!inputFile.is_open()) {
		std::cerr << "Error opening file." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string line;
	std::stringstream currentDateStream;
	currentDateStream	<< std::setfill('0') << std::setw(2) << now->tm_mday << "-"
						<< std::setfill('0') << std::setw(2) << now->tm_mon + 1 << "-"
						<< now->tm_year + 1900;

	std::string currentDate = currentDateStream.str();

	while (std::getline(inputFile, line)) {
		if (line == currentDate) {
			inputFile.close();
			return true;
		}
	}

	inputFile.close();
	return false;
}