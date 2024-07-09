#pragma once
#include <SFML/Graphics.hpp>

<<<<<<< HEAD
enum class PlayerState;
class PlayerView;
class PlayerModel;

class PlayerController {

private:
	PlayerModel* player_model;
	PlayerView* player_view;

    void processPlayerInput();
    void moveLeft();
    void moveRight();

public:
    PlayerController();
    ~PlayerController();

    void initialize();
    void update();
    void render();

    sf::Vector2f getPlayerPosition();

};
=======
namespace Player {

    enum class PlayerState;
    class PlayerView;
    class PlayerModel;

    class PlayerController {

    private:
        PlayerModel* player_model;
        PlayerView* player_view;

        void processPlayerInput();
        void moveLeft();
        void moveRight();

    public:
        PlayerController();
        ~PlayerController();

        void initialize();
        void update();
        void render();

        sf::Vector2f getPlayerPosition();
        int getPlayerScore();
        PlayerState getPlayerState();

    };

}
>>>>>>> parent of ea33e57 (Revert "inplement namespaces")
