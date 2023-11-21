#include <SDL.h>

// Window dimensions
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

// Helicopter dimensions
const int HELI_WIDTH = 64;
const int HELI_HEIGHT = 32;
const int HELI_SPEED = 5;

// Helicopter position
int heliX = 100;
int heliY = SCREEN_HEIGHT / 2 - HELI_HEIGHT / 2;

// Game loop flag
bool quit = false;

// SDL variables
SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;

// Event handler
SDL_Event event;

// Function to initialize SDL
bool initSDL() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    window = SDL_CreateWindow("Helicopter Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Window could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Renderer could not be created! SDL_Error: %s\n", SDL_GetError());
        return false;
    }

    return true;
}

// Function to handle input events
void handleInput() {
    while (SDL_PollEvent(&event) != 0) {
        if (event.type == SDL_QUIT) {
            quit = true;
        }
    }

    const Uint8* currentKeyStates = SDL_GetKeyboardState(nullptr);
    if (currentKeyStates[SDL_SCANCODE_UP]) {
        heliY -= HELI_SPEED;
    }
    if (currentKeyStates[SDL_SCANCODE_DOWN]) {
        heliY += HELI_SPEED;
    }
}

// Function to update game logic
void update() {
    // Add game logic here
}

// Function to render the game objects
void render() {
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    SDL_RenderClear(renderer);

    // Render helicopter
    SDL_Rect helicopterRect = { heliX, heliY, HELI_WIDTH, HELI_HEIGHT };
    SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF);
    SDL_RenderFillRect(renderer, &helicopterRect);

    SDL_RenderPresent(renderer);
}

// Function to clean up resources and quit SDL
void quitSDL() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

// Main function
int main(int argc, char* args[]) {
    if (!initSDL()) {
        return 1;
    }

    while (!quit) {
        handleInput();
        update();
        render();
    }

    quitSDL();
    return 0;
}
