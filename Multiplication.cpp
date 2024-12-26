#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
int totalquestions = 0;
int correctanswers = 0;
int main() {
	while (true) {
		srand(time(0));
		int number = rand() % 12 + 1;
		int number1 = rand() % 12 + 1;
		int guess = 0;
		std::cout << number << " x " << number1 << " = ";
		std::cin >> guess;
		totalquestions++;
		if (guess != number * number1) {
			std::cout << "incorrect\n";
		}
		else {
			std::cout << "Correct\n";
			correctanswers++;
		}

		int percentage = (static_cast<double>(correctanswers) / totalquestions) * 100;
		int numbers = (static_cast<int>(percentage));
		std::cout << numbers << "%\n";

	}
}
