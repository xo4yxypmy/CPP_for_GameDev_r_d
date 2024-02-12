#pragma once
#include <string>
struct Student
{
	std::string name;
	int marks[4];
};

void printArray(const Student students[], int size);
double averageMark(const Student& student);
void printAverageArray(const Student students[], int size);
bool compareStudents(const Student& a, const Student& b);
void sortStudents(Student students[], int size);
Student* getMostSuccessfullStudent(Student students[], int size);
int countStudentsAboveThreshold(Student students[], int size, double threshold);