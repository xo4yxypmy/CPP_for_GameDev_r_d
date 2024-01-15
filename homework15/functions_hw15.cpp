#include <iostream>
#include <algorithm>
#include "header_hw15.h"

void printArray(const Student students[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << students[i].name;
		std::cout << "\'s marks: ";
		for (int j = 0; j < 4; ++j) {
			std::cout << students[i].marks[j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

double averageMark(const Student& student) {
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += student.marks[i];
	}

	return sum / 4.0;
}

void printAverageArray(const Student students[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << students[i].name << "\'s average mark is ";
		double average = averageMark(students[i]);
		std::cout << average << std::endl;
	}
	std::cout << std::endl;
}

bool compareStudents(const Student& a, const Student& b) {
	return averageMark(a) > averageMark(b);
}

void sortStudents(Student students[], int size) {
	std::sort(students, students + size, compareStudents);
}

Student* getMostSuccessfullStudent(Student students[], int size) {
	if (size <= 0) {
		return nullptr;
	}

	Student* mostSuccessful = &students[0];
	double maxAverage = averageMark(students[0]);
	for (int i = 0; i < size; ++i) {
		double currentAverage = averageMark(students[i]);
		if (currentAverage > maxAverage) {
			mostSuccessful = &students[i];
			maxAverage = currentAverage;
		}
	}

	return mostSuccessful;
}

int countStudentsAbove75(Student students[], int size) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		double currentAverage = averageMark(students[i]);
		if (currentAverage > 75.0) {
			count++;
		}
	}

	return count;
}