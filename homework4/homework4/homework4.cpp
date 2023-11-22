#include <iostream>

enum class Month {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

enum class Season {
    Winter,
    Spring,
    Summer,
    Autumn
};

int main()
{ 
    // task 1
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "Enter 1st number: ";
    std::cin >> a;
    std::cout << "Enter 2nd number: ";
    std::cin >> b;
    std::cout << "Enter 3rd number: ";
    std::cin >> c;

    if (a >= b && a >= c) {
        std::cout << "Max number is: " << a << std::endl;
    }
    else if (b >= c) {
        std::cout << "Max number is: " << b << std::endl;
    }
    else {
        std::cout << "Max number is: " << c << std::endl;
    }

    // task 2
    int d = 0;
    int e = 0;
    std::cout << "Enter 1st number: ";
    std::cin >> d;
    std::cout << "Enter 2nd number: ";
    std::cin >> e;

    int minNumber = (d < e) ? d : e;
    std::cout << "Min number is: " << minNumber << std::endl;

    // task 3
    int f = 0;

    std::cout << "Enter your number: ";
    std::cin >> f;

    if (f % 5 == 0 && f % 11 == 0) {
        std::cout << "Your number is divisible by 5 AND 11" << std::endl;
    }
    else {
        std::cout << "Your number is NOT divisible by 5 AND 11" << std::endl;
    }
    
    // task 4
    int g = 0;
    int h = 0;
    int i = 0;

    std::cout << "Enter 1st number: ";
    std::cin >> g;
    std::cout << "Enter 2nd number: ";
    std::cin >> h;
    std::cout << "Enter 3rd number: ";
    std::cin >> i;

    if (g + h + i == 180 && (g <= 0 || h <= 0 || i <= 0)) {
        std::cout << "This is not a triangle, because none of corners can\'t be less than or equal to 0" << std::endl;
    }
    else if (g + h + i == 180 && g != 0 && h != 0 && i != 0) {
        std::cout << "You have a valid triangle" << std::endl;
    }
    else {
        std::cout << "This is not a triangle, because summ of corners must be equal to 180" << std::endl;
    }
    
    // task 5
    int monthNumber = 0;

    std::cout << "Enter number of month: ";
    std::cin >> monthNumber;

    Month selectedMonth;

    selectedMonth = static_cast<Month>(monthNumber);

    switch (selectedMonth) {
    case Month::January: std::cout << "January" << std::endl; break;
    case Month::February: std::cout << "February" << std::endl; break;
    case Month::March: std::cout << "March" << std::endl; break;
    case Month::April: std::cout << "April" << std::endl; break;
    case Month::May: std::cout << "May" << std::endl; break;
    case Month::June: std::cout << "June" << std::endl; break;
    case Month::July: std::cout << "July" << std::endl; break;
    case Month::August: std::cout << "August" << std::endl; break;
    case Month::September: std::cout << "September" << std::endl; break;
    case Month::October: std::cout << "October" << std::endl; break;
    case Month::November: std::cout << "November" << std::endl; break;
    case Month::December: std::cout << "December" << std::endl; break;
    default:
        std::cout << "Error: Invalid month number" << std::endl;
        return 1;
    }

    // task 6
    int numberOfSeason = 0;
    std::cout << "Enter number of month: ";
    std::cin >> numberOfSeason;

    Season selectedSeason;

    switch (numberOfSeason) {
    case 12:
    case 1:
    case 2:
        selectedSeason = Season::Winter;
        break;
    case 3:
    case 4:
    case 5:
        selectedSeason = Season::Spring;
        break;
    case 6:
    case 7:
    case 8:
        selectedSeason = Season::Summer;
        break;
    case 9:
    case 10:
    case 11:
        selectedSeason = Season::Autumn;
        break;
    default:
        std::cout << "Error: Invalid season number" << std::endl;
        return 1;
    }

    switch (selectedSeason) {
    case Season::Winter:
        std::cout << "Winter" << std::endl;
        break;
    case Season::Spring:
        std::cout << "Spring" << std::endl;
        break;
    case Season::Summer:
        std::cout << "Summer" << std::endl;
        break;
    case Season::Autumn:
        std::cout << "Autumn" << std::endl;
        break;
    }

    return 0;
}
