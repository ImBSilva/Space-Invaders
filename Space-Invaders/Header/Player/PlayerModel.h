#pragma once
#include <SFML/Graphics.hpp>

<<<<<<< HEAD
class PlayerController;

enum class PlayerState //Our Enum
{
    ALIVE,
    DEAD,
    // we will add more states later
};

class PlayerModel
{
private:
    const sf::Vector2f initial_player_position = sf::Vector2f(600.f, 900.f);

    sf::Vector2f player_position;
    PlayerState player_state; //Declaration
    int player_score;

public:
    const sf::Vector2f left_most_position = sf::Vector2f(50.f, 0.f);
    const sf::Vector2f right_most_position = sf::Vector2f(700.f, 0.f);

    const float player_movement_speed = 0.3;

    PlayerModel();
    ~PlayerModel();

    void initialize();
    void reset();

    sf::Vector2f getPlayerPosition();
    void setPlayerPosition(sf::Vector2f position);

    int getPlayerScore();
    void setPlayerScore(int score);

    //new getter and setter
    PlayerState getPlayerState();
    void setPlayerState(PlayerState state);


};
=======
namespace Player {

    class PlayerController;


    enum class PlayerState //Our Enum
    {
        ALIVE,
        DEAD,
        // we will add more states later
    };

    class PlayerModel
    {
    private:
        const sf::Vector2f initial_player_position = sf::Vector2f(600.f, 900.f);

        sf::Vector2f player_position;
        PlayerState player_state; //Declaration
        int player_score;

    public:
        const sf::Vector2f left_most_position = sf::Vector2f(50.f, 0.f);
        const sf::Vector2f right_most_position = sf::Vector2f(700.f, 0.f);

        const float player_movement_speed = 0.3;

        PlayerModel();
        ~PlayerModel();

        void initialize();
        void reset();

        sf::Vector2f getPlayerPosition();
        void setPlayerPosition(sf::Vector2f position);

        int getPlayerScore();
        void setPlayerScore(int score);

        //new getter and setter
        PlayerState getPlayerState();
        void setPlayerState(PlayerState state);


    };

}
>>>>>>> parent of ea33e57 (Revert "inplement namespaces")
