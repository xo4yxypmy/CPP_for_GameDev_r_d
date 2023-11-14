#include <iostream>
#include <iomanip>

int main()
{
	// task 1

	int inputNumber = 0;

	std::cout << "Input amount of seconds: ";
	std::cin >> inputNumber;

	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	hours = inputNumber / 60 / 60;
	minutes = inputNumber / 60 % 60;
	seconds = inputNumber % 60;

	std::cout << "Hours: " << hours;
	std::cout << " , minutes: " << minutes;
	std::cout << " , seconds: " << seconds << std::endl;

	//task 2

	int a = 0;
	int b = 0;
	int c = 0;

	std::cout << "Enter A number: ";
	std::cin >> a;
	std::cout << "Enter B number: ";
	std::cin >> b;
	std::cout << "Enter C number: ";
	std::cin >> c;

	int summ = a + b + c;
	int mult = a * b * c;
	double midd = static_cast<double>(summ) / 3;
	bool aAndB = a <= b;
	bool bAndC = b >= c;

	std::cout << "Summ: " << summ << std::endl;
	std::cout << "Mult: " << mult << std::endl;
	std::cout << "Middle: " << midd << std::endl;
	std::cout << "A <= B: " << std::boolalpha << aAndB << std::endl;
	std::cout << "B >= C: " << std::boolalpha << bAndC << std::endl;

	// task 3

	int a3 = 0;
	int b3 = 0;

	std::cout << "Enter A number: ";
	std::cin >> a3;
	std::cout << "Enter B number: ";
	std::cin >> b3;

	bool lessThan = a3 < b3;
	bool equal = a3 == b3;
	bool moreThan = a3 > b3;
	bool lessOrEqual = a3 <= b3;

	std::cout << "A less than B: " << std::boolalpha << lessThan << std::endl;
	std::cout << "A equal B: " << std::boolalpha << equal << std::endl;
	std::cout << "A more than B: " << std::boolalpha << moreThan << std::endl;
	std::cout << "A less or equal B: " << std::boolalpha << lessOrEqual << std::endl;

	// task 4

	int w = 0;
	int h = 0;
	int s = 0;
	int p = 0;

	std::cout << "Enter width: ";
	std::cin >> w;
	std::cout << "Enter height: ";
	std::cin >> h;

	s = h * w;
	p = h * 2 + w * 2;

	std::cout << "Square is " << s << " cm^2" << std::endl;
	std::cout << "Perimeter is " << p << " cm" << std::endl;

	// task 5

	int r = 0;
	double pi = 3.14;
	int l = 0;
	int sC = 0;

	std::cout << "Enter radius: ";
	std::cin >> r;

	sC = pi * r * r;
	l = 2 * pi * r;

	std::cout << "Square of circle is " << sC << " cm^2" << std::endl;
	std::cout << "Length of circle is " << l << " cm" << std::endl;

}
