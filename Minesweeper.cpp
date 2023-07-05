#include <iostream>
#include <vector>
#include <random>

// Function to generate random mine positions
void generateMines(std::vector<std::vector<char>>& board, int numMines) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, 7);

    int count = 0;
    while (count < numMines) {
        int row = distrib(gen);
        int col = distrib(gen);

        if (board[row][col] != '*') {
            board[row][col] = '*';
            count++;
        }
    }
}

// Function to count the number of adjacent mines
int countAdjacentMines(const std::vector<std::vector<char>>& board, int row, int col) {
    int count = 0;
    int numRows = board.size();
    int numCols = board[0].size();

    // Check top row
    if (row - 1 >= 0) {
        if (col - 1 >= 0 && board[row - 1][col - 1] == '*')
            count++;
        if (board[row - 1][col] == '*')
            count++;
        if (col + 1 < numCols && board[row - 1][col + 1] == '*')
            count++;
    }

    // Check current row
    if (col - 1 >= 0 && board[row][col - 1] == '*')
        count++;
    if (col + 1 < numCols && board[row][col + 1] == '*')
        count++;

    // Check bottom row
    if (row + 1 < numRows) {
        if (col - 1 >= 0 && board[row + 1][col - 1] == '*')
            count++;
        if (board[row + 1][col] == '*')
            count++;
        if (col + 1 < numCols && board[row + 1][col + 1] == '*')
            count++;
    }

    return count;
}

// Function to reveal a cell
void revealCell(std::vector<std::vector<char>>& board, std::vector<std::vector<bool>>& revealed, int row, int col) {
    int numRows = board.size();
    int numCols = board[0].size();

    if (row < 0 || row >= numRows || col < 0 || col >= numCols || revealed[row][col])
        return;

    revealed[row][col] = true;

    if (board[row][col] == ' ')
    {
        revealCell(board, revealed, row - 1, col - 1);
        revealCell(board, revealed, row - 1, col);
        revealCell(board, revealed, row - 1, col + 1);
        revealCell(board, revealed, row, col - 1);
        revealCell(board, revealed, row, col + 1);
        revealCell(board, revealed, row + 1, col - 1);
        revealCell(board, revealed, row + 1, col);
        revealCell(board, revealed, row + 1, col + 1);
    }
}

// Function to draw the board
void drawBoard(const std::vector<std::vector<char>>& board, const std::vector<std::vector<bool>>& revealed) {
    int numRows = board.size();
    int numCols = board[0].size();

    std::cout << "  ";
    for (int i = 0; i < numCols; ++i) {
       
