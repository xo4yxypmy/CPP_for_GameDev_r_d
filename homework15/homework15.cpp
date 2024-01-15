#include <iostream>
#include "header_hw15.h"

int main()
{
	const int classSize = 8;
	Student students[classSize] = {
		{"Andrew", {65, 75, 71, 82}},
		{"Monika", {78, 82, 69, 89}},
		{"Tom", {25, 55, 44, 45}},
		{"Jerry", {90, 85, 95, 100}},
		{"Arthur", {32, 55, 45, 72}},
		{"Jacob", {95, 85, 46, 98}},
		{"Vanessa", {85, 88, 97, 100}},
		{"Britney", {98, 99, 86, 99}}
	};
	
	printAverageArray(students, classSize);

	int count = countStudentsAbove75(students, classSize);
	std::cout << "Amount of students with average mark above 75.0 is " << count << std::endl;
	std::cout << std::endl;

	std::cout << "Array before sort:" << std::endl;
	printArray(students, classSize);

	sortStudents(students, classSize);

	std::cout << "Array after sort by average:" << std::endl;
	printArray(students, classSize);

	Student* mostSuccessful = getMostSuccessfullStudent(students, classSize);
	if (mostSuccessful != nullptr) {
		std::cout << "Most successful student is " << mostSuccessful->name <<
			" with average mark " << averageMark(*mostSuccessful) << std::endl;
	}
	else {
		std::cout << "The array is empty." << std::endl;
	}

	return 0;
}