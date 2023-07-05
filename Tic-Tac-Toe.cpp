#include <iostream>
#include <vector>

// Function to draw the Tic-Tac-Toe board
void drawBoard(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Function to check if a player has won
bool checkWin(const std::vector<std::vector<char>>& board, char player) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    // Check columns
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Function to check if the board is full
bool isBoardFull(const std::vector<std::vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

// Function to play the Tic-Tac-Toe game
void playGame() {
    std::vector<std::vector<char>> board(3, std::vector<char>(3, ' '));
    char currentPlayer = 'X';
    bool gameFinished = false;

    while (!gameFinished) {
        // Draw the board
        drawBoard(board);

        // Get the row and column from the current player
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter your move (row column): ";
        std::cin >> row >> col;

        // Check if the move is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            gameFinished = true;
        } else if (isBoardFull(board)) {
            std::cout << "It's a draw!" << std::endl;
            gameFinished = true;
        }

        // Switch to the next player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    std::cout << "Tic-Tac-Toe Game" << std::endl;
    playGame();
    return 0;
}
