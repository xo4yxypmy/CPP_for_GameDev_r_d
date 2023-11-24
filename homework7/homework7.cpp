#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "Hey, you. You\'re finally awake." << std::endl;
    std::cout << "*oh no, you are a prisoner*" << std::endl;
    std::cout << "Look, the Thalmor has a secret password to get a freedom" << std::endl;
    std::cout << "All you need is to try to guess their number from 0 to 50. Good luck!" << std::endl << std::endl;
    std::cout << "Just enter \"-1\", if you wanna shoot an arrow in my knee!" << std::endl << std::endl;
    
    std::srand(std::time(nullptr));

    const int GeneratingRange = 50;
    int generatedNum = std::rand() % (GeneratingRange + 1);

    int currentTry = 0;
    int highScore = INT_MAX;
    int userNum = 0;

    while (true) {
        std::cout << "So, can I ask your number (*^.^*): ";
        std::cin >> userNum;
        std::cout << std::endl;
        
        if (userNum == -1) {
            std::cout << "*an arrow shoots into the knee*" << std::endl;
            std::cout << "I USED TO BE AN ADVENTURER LIKE YOU," << std::endl;
            std::cout << "UNTIL I TOOK AN ARROW TO THE KNEE." << std::endl;
            break;
        }
        else if (userNum > GeneratingRange || userNum < 0) {
            std::cout << "!!! WRONG !!! Your number is not from 0 to 50" << std::endl << std::endl;
        }
        else if (userNum == generatedNum) {
            currentTry++;
            std::cout << "!!! CONGRATS !!! " << generatedNum << " IS THALMOR\'S SECRET PASSWORD !!!" << std::endl;
            std::cout << "You spent " << currentTry << " tries!" << std::endl;
            if (currentTry < highScore) {
                highScore = currentTry;
                std::cout << "NEW HIGHSCORE!" << std::endl;
                std::cout << "You beat your previous best and now it is " << highScore << " tries." << std::endl << std::endl;
            }
            else {
                highScore;
                std::cout << "Your the best highscore is " << highScore << " tries!" << std::endl << std::endl;
            }            
            currentTry = 0;
            generatedNum = std::rand() % (GeneratingRange + 1);
            std::cout << "Guess what, now try again." << std::endl;
            std::cout << "AH-HA-HA-HA-HA-HA" << std::endl;
        }else if (userNum >= generatedNum + 20) {
            currentTry++;
            std::cout << "Cold, your number is greater, try less than " << userNum << std::endl << std::endl;
        }
        else if (userNum >= generatedNum + 10) {
            currentTry++;
            std::cout << "Warm, your number is a little greater, try a little less than " << userNum << std::endl << std::endl;
        }
        else if (generatedNum >= userNum + 20) {
            currentTry++;
            std::cout << "Cold, my number is greater, try more than " << userNum << std::endl << std::endl;
        }
        else if (generatedNum >= userNum + 10) {
            currentTry++;
            std::cout << "Warm, my number is a little greater, try a little more than " << userNum << std::endl << std::endl;
        }
        else {
            currentTry++;
            std::cout << "You\'re very close!" << std::endl << std::endl;
        }

    }
}

