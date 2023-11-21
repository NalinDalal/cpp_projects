#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(std::time(nullptr));
    //srand- Seed the random number generator with the current time

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;
    //rand()%100 moves from 0 to 99 then +1 moves it to 1 to 100
    
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts.\n";
        }
    } while (guess != secretNumber);

    return 0;
}
