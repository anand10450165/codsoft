#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;

    std::cout << "Guess the number between 1 and 100: ";

    do {
        std::cin >> guess;
        if (guess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again: ";
        }
    } while (guess != randomNumber);

    std::cout << "Congratulations! You guessed the correct number.\n";
}
