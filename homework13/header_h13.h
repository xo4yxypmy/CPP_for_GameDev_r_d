#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <string>
#include <iomanip>
#include <cctype>

int getDay(const std::tm* tmObj);
int getMonth(const std::tm* tmObj);
int getYear(const std::tm* tmObj);
std::string getRandomWord(int generatedNum);
void displayWordProgress(const std::string& targetWord, const std::string& guessedWord);
void writeCurrentDateToFile(std::ofstream& outputFile, std::tm* now);
bool isCurrentDateInFile(const std::string& fileName, std::tm* now);