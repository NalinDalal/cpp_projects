#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 40;  // Width of the game area
const int HEIGHT = 20; // Height of the game area

// Structure to represent the ball
struct Ball {
    int x;
    int y;
    int dx;
    int dy;
};

// Function to initialize the ball's position and direction
void initializeBall(Ball& ball) {
    ball.x = WIDTH / 2;
    ball.y = HEIGHT / 2;
    ball.dx = (rand() % 2 == 0) ? 1 : -1; // Random initial direction on the x-axis
    ball.dy = (rand() % 2 == 0) ? 1 : -1; // Random initial direction on the y-axis
}

// Function to update the ball's position and handle collisions
void updateBall(Ball& ball) {
    // Update the ball's position
    ball.x += ball.dx;
    ball.y += ball.dy;

    // Handle collisions with the walls
    if (ball.x == 0 || ball.x == WIDTH - 1) {
        ball.dx = -ball.dx; // Reverse direction on the x-axis
    }
    if (ball.y == 0 || ball.y == HEIGHT - 1) {
        ball.dy = -ball.dy; // Reverse direction on the y-axis
    }
}

// Function to display the game area and the ball
void displayGame(const Ball& ball) {
    system("cls"); // Clear the console

    // Display the game area
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            if (x == ball.x && y == ball.y) {
                cout << "O"; // Display the ball
            } else if (x == 0 || x == WIDTH - 1 || y == 0 || y == HEIGHT - 1) {
                cout << "#"; // Display the walls
            } else {
                cout << " "; // Display empty space
            }
        }
        cout << endl;
    }
}

int main() {
    srand(time(0)); // Seed the random number generator

    Ball ball;
    initializeBall(ball);

    while (true) {
        displayGame(ball);
        updateBall(ball);

        // Delay for smoother animation (platform-dependent)
        // You may need to adjust the value depending on your system
        for (int i = 0; i < 10000000; i++) {}

        // Check for user input to exit the game
        if (kbhit()) {
            char key = getch();
            if (key == 'q' || key == 'Q') {
                break;
            }
        }
    }

    return 0;
}
