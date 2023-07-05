#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateRandomNumber(int min, int max) {
    srand(static_cast<unsigned int>(time(0)));
    return rand() % (max - min + 1) + min;
}

bool playAgain() {
    char playAgain;

    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;

    return (playAgain == 'y' || playAgain == 'Y');
}

void playNumberGuessingGame(int minRange, int maxRange, int maxAttempts) {
    int secretNumber = generateRandomNumber(minRange, maxRange);
    int attempts = 0;
    int guess;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between " << minRange << " and " << maxRange << ".\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            return;
        } else if (guess < secretNumber) {
            cout << "Too low! Guess higher.\n";
        } else {
            cout << "Too high! Guess lower.\n";
        }

        if (attempts >= maxAttempts) {
            cout << "You ran out of attempts. The secret number was " << secretNumber << ". Better luck next time!\n";
            return;
        }
    } while (true);
}

int main() {
    int minRange = 1;
    int maxRange = 100;
    int maxAttempts = 5;

    do {
        playNumberGuessingGame(minRange, maxRange, maxAttempts);
    } while (playAgain());

    return 0;
}
