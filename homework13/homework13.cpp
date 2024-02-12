#define _CRT_SECURE_NO_WARNINGS

#include "header_h13.h"

int main()
{
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);

    std::srand(static_cast<unsigned>(std::time(nullptr)));

    const int GeneratingRange = 365;
    int generatedNum = std::rand() % (GeneratingRange + 1);

    int highScore = INT_MAX;
    int currentTry = 0;
    int userNum = 0;


    while (true) {

        std::cout << "1 - Wordle of the day"<< std::endl;
        std::cout << "2 - Random Wordle" << std::endl;
        std::cout << "0 - Exit" << std::endl;
        std::cout << "Enter: ";
        std::cin >> userNum;

        if (userNum == 0) {
            std::cout << "Ok, see you later!" << std::endl;
            break;
        }
        else if (userNum == 2) {
        
            std::string targetWord = getRandomWord(generatedNum);
            std::string guessedWord(targetWord.length(), '*');
            std::cout << "Guess: " << guessedWord << std::endl;

            while (true) {
                std::string userGuess;
                std::cout << "Enter: ";
                std::cin >> userGuess;

                if (userGuess == targetWord) {
                    currentTry++;
                    std::cout << "Thats rigt!" << std::endl;

                    if (currentTry < highScore) {
                        highScore = currentTry;
                        std::cout << "NEW RECORD! You made " << highScore << " tries to guess!" << std::endl;                                          
                    }
                    else {
                        std::cout << "You made " << currentTry << " tries to guess!" << std::endl;
                    }

                    currentTry = 0;
                    generatedNum = std::rand() % (GeneratingRange + 1);
                    break;
                }
                else {
                    displayWordProgress(targetWord, userGuess);
                    currentTry++;
                }

            }
        }
       else if (userNum == 1) {
            std::cout << "Current Date: " << getDay(now) << "-"
                << getMonth(now) << "-" <<
                getYear(now) << std::endl;

            if (isCurrentDateInFile("word_of_day_log.txt", now)) {
                std::cout << "Already found! Come back tommorow!" << std::endl;
            }
            else {
                std::string targetWord = getRandomWord(generatedNum);
                std::string guessedWord(targetWord.length(), '*');
                std::cout << "Guess: " << guessedWord << std::endl;

                while (true) {
                    std::string userGuess;
                    std::cout << "Enter: ";
                    std::cin >> userGuess;

                    if (userGuess == targetWord) {
                        std::ofstream outputFile("word_of_day_log.txt", std::ios::app);
                        if (!outputFile.is_open()) {
                            std::cerr << "Error opening file for writing." << std::endl;
                            exit(EXIT_FAILURE);
                        }

                        currentTry++;
                        std::cout << "Thats rigt!" << std::endl;

                        if (currentTry < highScore) {
                            highScore = currentTry;
                            std::cout << "NEW RECORD! You made " << highScore << " tries to guess!" << std::endl;
                        }
                        else {
                            std::cout << "You made " << currentTry << " tries to guess!" << std::endl;
                        }

                        currentTry = 0;
                        generatedNum = std::rand() % (GeneratingRange + 1);
                        writeCurrentDateToFile(outputFile, now);
                        break;
                    }
                    else {
                        displayWordProgress(targetWord, userGuess);
                        currentTry++;
                    }

                }
            }
        }
        else {
            std::cout << "Invalid number!" << std::endl;
        }        
        std::cout << std::endl;
    }
    return 0;
}