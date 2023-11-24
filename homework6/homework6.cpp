#include <iostream>
#include <cctype>

int main()
{
    // task 1
    int a1 = 0;
    int d = 0;
    int n = 0;
    std::cout << "Enter first element: ";
    std::cin >> a1;
    std::cout << "Enter step of progression: ";
    std::cin >> d;
    std::cout << "Enter number of the last element: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int an = a1 + i * d;
        std::cout << an << " ";
    }
    std::cout << std::endl;

    // task 2
    int nF = 0;
    std::cout << "Enter the element number of the Fibonacci sequence: ";
    std::cin >> nF;

    int f1 = 1, f2 = 1, next;

    for (int i = 3; i <= nF; ++i) {
        next = f1 + f2;
        f1 = f2;
        f2 = next;
    }

    std::cout << "Element number " << nF << " in the Fibonacci sequence: " << (nF > 2 ? f2 : 1) << std::endl;

    // task 3
    int factorial = 0;
    std::cout << "Enter a positive number: ";
    std::cin >> factorial;

    if (factorial < 0) {
        std::cout << "Please enter a non-negative number" << std::endl;
    }
    else {
        int nFactorial = 1;
        for (int i = 1; i <= factorial; ++i) {
            nFactorial *= i;
        }

        std::cout << "Factorial of " << factorial << "! is " << nFactorial << std::endl;
    }

    // task 4
    int f = 0;
    int e = 0;
    std::cout << "Enter size of sides: ";
    std::cin >> f;
    std::cout << "Enter amount of rows: ";
    std::cin >> e;

    int vidstup = 0;
    std::cout << "a" << std::endl;

    for (int a = 0; a < f; a++) {
        for (int b = a; b < f; b++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "b" << std::endl;

    for (int a = 0; a < f; a++) {
        for (int b = 0; b <= a; b++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "c" << std::endl;

    for (int a = 0; a < f; a++) {
        for (int b = 0; b < e; b++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "d" << std::endl;

    for (int a = 0; a < f; a++) {
        for (int v = 0; v < vidstup; v++) {
            std::cout << ' ';
        }
        for (int b = 0; b < e; b++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        vidstup++;
    }
    std::cout << "e" << std::endl;

    for (int a = 0; a < f; a++) {
        for (int b = 0; b <= a; b++) {
            std::cout << (b % 2);
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    //task 5
    char symbol;
    int totalSum = 0;

    while (true) {
        std::cout << "Please enter your symbol: ";
        std::cin >> symbol;

        if (isalpha(symbol)) {
            symbol = toupper(symbol);
            std::cout << "We transformed your letter to uppercase: " << symbol << std::endl;
        }
        else if (isdigit(symbol)) {
            totalSum += symbol - '0';
            std::cout << "Current sum is " << totalSum << std::endl;
        }
        else if (symbol == '.') {
            std::cout << "Oh, awesome, you have broken me =(" << std::endl;
            break;
        }
        else {
            std::cout << "Sorry, but this symbol \"" << symbol << "\" is not processed by the program!" << std::endl;
        }

    }

}
