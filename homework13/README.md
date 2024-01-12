
# Conslole Wordle Game

Welcome to Console Wordle, a text-based word-guessing game that offers two exciting modes to test your vocabulary and deduction skills!

## Game modes

It has 2 game modes and 1 for exit:

```bash
1 - Wordle of the day
2 - Random Wordle
0 - Exit
```
Guess the Word of the Day:
- Every day, a new word is selected as the Word of the Day from Database.
- Your challenge is to guess the correct word before the day ends.
- If you guess the word successfully, you can try again tomorrow with a new challenge!

Guess a Random Word:
- In this mode, a word is randomly choose from Database.
- Put your word-guessing prowess to the test and try to solve the puzzle.
- You have no limits for trying per day.
## Word of a day gameplay

![Word of a day gameplay](https://i.imgur.com/kJzHtz2.png)

## Random word gameplay

![Random word game play](https://i.imgur.com/CObEmiW.png)


## Features

- Guess a random word or a word of  day from Data Base.
- High-score tracking adds a competitive edge to the game.
- If you guessed a word of a day, you can try it again tommorw.
- Engaging gameplay that sharpens your word recognition skills.


## Functions

A function that get a random word from file (our Database):
```cpp
std::string getRandomWord(int generatedNum) {
	std::ifstream file("WordsDataBase.txt");
	if (!file.is_open()) {
		std::cerr << "Error opening file." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string word;
	for (int i = 0; i <= generatedNum; ++i) {
		if (!std::getline(file, word)) {
			std::cerr << "Error reading from file." << std::endl;
			exit(EXIT_FAILURE);
		}
	}

	file.close();
	return word;
}
```

A function that show your progress in guessing:
```cpp
void displayWordProgress(const std::string& targetWord, const std::string& guessedWord) {
	std::cout << "Guess: ";

	for (std::size_t i = 0; i < targetWord.length(); ++i) {
		if (guessedWord[i] == targetWord[i]) {
			std::cout << static_cast<char>(std::toupper(guessedWord[i]));
		}
		else if (targetWord.find(guessedWord[i]) != std::string::npos) {
			std::cout << static_cast<char>(std::tolower(guessedWord[i]));
		}
		else
		{
			std::cout << "*";
		}
	}
	std::cout << std::endl;
}
```

A simple function that write a current date to file, if player successfully guess a word of a day:
```cpp
void writeCurrentDateToFile(std::ofstream& outputFile, std::tm* now) {
	outputFile << std::setfill('0') << std::setw(2) << now->tm_mday << "-"
		<< std::setfill('0') << std::setw(2) << now->tm_mon + 1 << "-"
		<< now->tm_year + 1900 << std::endl;
}
```

And the last function check a file, if it contains a current date:
```cpp
bool isCurrentDateInFile(const std::string& fileName, std::tm* now) {
	std::ifstream inputFile(fileName);
	if (!inputFile.is_open()) {
		std::cerr << "Error opening file." << std::endl;
		exit(EXIT_FAILURE);
	}

	std::string line;
	std::stringstream currentDateStream;
	currentDateStream	<< std::setfill('0') << std::setw(2) << now->tm_mday << "-"
						<< std::setfill('0') << std::setw(2) << now->tm_mon + 1 << "-"
						<< now->tm_year + 1900;

	std::string currentDate = currentDateStream.str();

	while (std::getline(inputFile, line)) {
		if (line == currentDate) {
			inputFile.close();
			return true;
		}
	}

	inputFile.close();
	return false;
}
```


## Author

[@xo4yxypmy](https://github.com/xo4yxypmy)

