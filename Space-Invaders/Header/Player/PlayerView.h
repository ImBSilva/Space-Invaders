#pragma once
#include <SFML/Graphics.hpp>

<<<<<<< HEAD
class PlayerController;

class PlayerView
{
private:

    const sf::String player_texture_path = "../assets/textures/player_ship.png";
    const float player_sprite_width = 0.5;
    const float player_sprite_height = 0.5;

    sf::RenderWindow* game_window;

    sf::Texture player_texture;
    sf::Sprite player_sprite;

    PlayerController* player_controller; // ptr to player controller

    void initializePlayerSprite();
    void scalePlayerSprite();

public:
    PlayerView();
    ~PlayerView();

    void initialize(PlayerController* controller); // we pass a pointer of type controller because we need to use this in the view later.
    void update();
    void render();
};
=======

namespace Player {

    class PlayerController;

    class PlayerView
    {
    private:

        const sf::String player_texture_path = "../../assets/textures/player_ship.png";
        const float player_sprite_width = 0.5;
        const float player_sprite_height = 0.5;

        sf::RenderWindow* game_window;

        sf::Texture player_texture;
        sf::Sprite player_sprite;

        PlayerController* player_controller; // ptr to player controller

        void initializePlayerSprite();
        void scalePlayerSprite();

    public:
        PlayerView();
        ~PlayerView();

        void initialize(PlayerController* controller); // we pass a pointer of type controller because we need to use this in the view later.
        void update();
        void render();
    };
}
>>>>>>> parent of ea33e57 (Revert "inplement namespaces")
