#include <iostream>
#include <SFML/Graphics.hpp>
#include "header/GameService.h"
#include "header/PlayerService.h"



using namespace std;
using namespace sf;


int main() {
    GameService* game_service = new GameService();
	PlayerService* player_controller = new PlayerService();

    game_service->ignite();

    while (game_service->isRunning())
    {
        game_service->update();
		game_service->render();

        player_controller->initialize();
    }



   /*Player player;


    // Define the video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode(1920, 1080);

    // Create a window object with specific dimensions and a title
    sf::RenderWindow window(videoMode, "My Game");

	player.player_texture.loadFromFile("assets/textures/player_ship.png"); // Load the player ship texture

    player.player_sprite.setTexture(player.player_texture); // Set the player sprite variable 
    player.player_sprite.setPosition(player.getPosition());
	player.player_sprite.setScale(0.5f,0.5f);



    while (window.isOpen()) {

        sf::Event event; // create an object of the event class
        while (window.pollEvent(event)) { //check for pending events

            if (event.type == sf::Event::Closed) //check if window is being closed
                window.close();
        }

        // Handle input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || Keyboard::isKeyPressed(Keyboard::Left) ) {
            //player.moveLeft();
            player.move(-1.0* player.getMoveSpeed());
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || Keyboard::isKeyPressed(Keyboard::Right)) {
            player.move(1.0f* player.getMoveSpeed());
        }


        // Clear the window
        window.clear(sf::Color::Blue);

        player.player_sprite.setPosition(player.getPosition()); // Set the position of the player sprite


        window.draw(player.player_sprite); // Draw the player sprite




        // Display whatever you draw
        window.display();

    }*/

    return 0;
}