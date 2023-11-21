#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum class Choice {
    ROCK,
    PAPER,
    SCISSORS
};

Choice getPlayerChoice() {
    int choice;

    cout << "Choose your move:\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            return Choice::ROCK;
        case 2:
            return Choice::PAPER;
        case 3:
            return Choice::SCISSORS;
        default:
            cout << "Invalid choice. Please choose again.\n";
            return getPlayerChoice();
    }
}

Choice getComputerChoice() {
    srand(static_cast<unsigned int>(time(0)));
    int choice = rand() % 3;

    switch (choice) {
        case 0:
            return Choice::ROCK;
        case 1:
            return Choice::PAPER;
        case 2:
            return Choice::SCISSORS;
    }

    return Choice::ROCK; // Default case (shouldn't be reached)
}

bool playAgain() {
    char playAgain;

    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;

    return (playAgain == 'y' || playAgain == 'Y');
}

bool isPlayerWin(Choice player, Choice computer) {
    // Check for player win conditions
    if ((player == Choice::ROCK && computer == Choice::SCISSORS) ||
        (player == Choice::PAPER && computer == Choice::ROCK) ||
        (player == Choice::SCISSORS && computer == Choice::PAPER)) {
        return true;
    }

    return false;
}

void playRockPaperScissors() {
    cout << "Let's play Rock Paper Scissors!\n";

    do {
        Choice playerChoice = getPlayerChoice();
        Choice computerChoice = getComputerChoice();

        cout << "Player chose ";
        switch (playerChoice) {
            case Choice::ROCK:
                cout << "Rock";
                break;
            case Choice::PAPER:
                cout << "Paper";
                break;
            case Choice::SCISSORS:
                cout << "Scissors";
                break;
        }
        cout << endl;

        cout << "Computer chose ";
        switch (computerChoice) {
            case Choice::ROCK:
                cout << "Rock";
                break;
            case Choice::PAPER:
                cout << "Paper";
                break;
            case Choice::SCISSORS:
                cout << "Scissors";
                break;
        }
        cout << endl;

        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if (isPlayerWin(playerChoice, computerChoice)) {
            cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }

        cout << endl;
    } while (playAgain());
}

int main() {
    playRockPaperScissors();

    return 0;
}
