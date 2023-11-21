#include <SFML/Graphics.hpp>
#include <iostream>

// Game window dimensions
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// Bike dimensions
const int BIKE_WIDTH = 50;
const int BIKE_HEIGHT = 100;
const float BIKE_SPEED = 5.0f;

int main() {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Bike Race Game");

    // Create the bike sprite
    sf::Texture bikeTexture;
    if (!bikeTexture.loadFromFile("bike.png")) {
        std::cerr << "Failed to load bike texture." << std::endl;
        return 1;
    }

    sf::Sprite bikeSprite(bikeTexture);
    bikeSprite.setPosition(WINDOW_WIDTH / 2 - BIKE_WIDTH / 2, WINDOW_HEIGHT - BIKE_HEIGHT);

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Move the bike
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && bikeSprite.getPosition().x > 0) {
            bikeSprite.move(-BIKE_SPEED, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) &&
            bikeSprite.getPosition().x + BIKE_WIDTH < WINDOW_WIDTH) {
            bikeSprite.move(BIKE_SPEED, 0);
        }

        // Clear the window
        window.clear(sf::Color::White);

        // Draw the bike
        window.draw(bikeSprite);

        // Display the window
        window.display();
    }

    return 0;
}
