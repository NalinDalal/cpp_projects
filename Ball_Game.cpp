#include <GL/glut.h>  // Include the GLUT header file
#include <cmath>

// Ball position and velocity variables
float ballX = 0.0f;
float ballY = 0.0f;
float ballRadius = 0.5f;
float ballXSpeed = 0.02f;
float ballYSpeed = 0.007f;

// Function to initialize OpenGL
void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // Set the background color to black
}

// Function to handle window resizing
void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);  // Set the viewport
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);  // Set the orthographic view
}

// Function to update the ball position
void update() {
    ballX += ballXSpeed;
    ballY += ballYSpeed;

    // Handle ball collisions with walls
    if (ballX + ballRadius > 1.0f || ballX - ballRadius < -1.0f) {
        ballXSpeed = -ballXSpeed;
    }
    if (ballY + ballRadius > 1.0f || ballY - ballRadius < -1.0f) {
        ballYSpeed = -ballYSpeed;
    }
}

// Function to render the ball
void drawBall() {
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(ballX, ballY, 0.0f);

    int numSegments = 100;
    float angle;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.0f, 0.0f);  // Center of the ball
    for (int i = 0; i <= numSegments; i++) {
        angle = i * 2.0f * M_PI / numSegments;
        glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
    }
    glEnd();
}

// Function to display the scene
void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the color buffer
    glColor3f(1.0f, 1.0f, 1.0f);   // Set the ball color to white

    update();      // Update the ball position
    drawBall();    // Render the ball

    glutSwapBuffers();  // Swap the front and back buffers
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);                       // Initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // Enable double buffering and RGB color mode
    glutInitWindowSize(800, 600);                // Set the window size

    glutCreateWindow("Ball Game");  // Create a window with the specified title
    glutDisplayFunc(display);       // Set the display callback function
    glutReshapeFunc(reshape);       // Set the reshape callback function
    init();                         // Initialize OpenGL

    glutMainLoop();  // Enter the GLUT event loop

    return 0;
}
