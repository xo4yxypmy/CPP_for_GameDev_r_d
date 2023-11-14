#include <iostream>
#include <iomanip>

enum class WeekDay {

	Monday = 1,
	Tuesday = 2,
	Wednesday = 3,
	Thursday = 4,
	Friday = 5,
	Saturday = 6,
	Sunday = 7

};

int main()
{
	// task 1

	int firstInt = 0;
	int secondInt = 0;

	std::cout << "Enter first number: ";
	std::cin >> firstInt;
	std::cout << "Enter second number: ";
	std::cin >> secondInt;

	firstInt = firstInt + secondInt;
	secondInt = firstInt - secondInt;
	firstInt = firstInt - secondInt;

	std::cout << "Now first number is " << firstInt << std::endl;
	std::cout << "Now second number is " << secondInt << std::endl;

	// task 2

	double doubleNumber = 24.653;

	std::cout << doubleNumber << std::endl;

	doubleNumber = static_cast <int>(doubleNumber);

	std::cout << doubleNumber << std::endl;

	int longNumber = 922337;

	std::cout << std::right << std::fixed << std::setw(20) << std::setfill('$') << longNumber << std::endl;



	// task 3

	double myDouble = 24.6519512398;

	std::cout << std::setprecision(2) << std::fixed << myDouble << std::endl;
	std::cout << std::setprecision(2) << std::scientific << myDouble << std::endl;
	std::cout << std::setprecision(5) << std::fixed << myDouble << std::endl;
	std::cout << std::setprecision(5) << std::scientific << myDouble << std::endl;
	std::cout << std::setprecision(10) << std::fixed << myDouble << std::endl;
	std::cout << std::setprecision(10) << std::scientific << myDouble << std::endl;

	// task 4

	WeekDay day1 = WeekDay::Monday;
	WeekDay day2 = WeekDay::Tuesday;
	WeekDay day3 = WeekDay::Wednesday;
	WeekDay day4 = WeekDay::Thursday;
	WeekDay day5 = WeekDay::Friday;
	WeekDay day6 = WeekDay::Saturday;
	WeekDay day7 = WeekDay::Sunday;

	std::cout << int(day1) << std::endl;
	std::cout << int(day2) << std::endl;
	std::cout << int(day3) << std::endl;
	std::cout << int(day4) << std::endl;
	std::cout << int(day5) << std::endl;
	std::cout << int(day6) << std::endl;
	std::cout << int(day7) << std::endl;

	// task 5

	bool myBool;

	std::cout << "Enter number: ";
	std::cin >> myBool;
	std::cout << std::boolalpha << myBool;


}
