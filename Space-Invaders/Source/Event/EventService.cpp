#include "../../header/event/EventService.h"
#include "../../header/Main/GameService.h"
#include "../../header/graphic/GraphicService.h"
#include "../../Header/global/ServiceLocator.h"

EventService::EventService() { game_window = nullptr; }

EventService::~EventService() = default; //calls the default destructor

void EventService::initialize()
{
    game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
}

void EventService::update()
{
    //for later
}

void EventService::processEvents()
{
    if (isGameWindowOpen()) {
        while (game_window->pollEvent(game_event)) {
            // Check for window closure
            if (gameWindowWasClosed() || hasQuitGame())
            {
                game_window->close();
            }
        }
    }
}

bool EventService::hasQuitGame() { return (isKeyboardEvent() && pressedEscapeKey()); } // only true if the ESC key is pressed and a keyboard event has been registered

//checks for if a keyboard key has been pressed
bool EventService::isKeyboardEvent() { return game_event.type == sf::Event::KeyPressed; }

//control click on the SFML functions to see what they do internally
bool EventService::pressedEscapeKey() { return game_event.key.code == sf::Keyboard::Escape; }

bool EventService::isGameWindowOpen() { return game_window != nullptr; }

bool EventService::gameWindowWasClosed() { return game_event.type == sf::Event::Closed; }

bool EventService::pressedLeftKey() { return game_event.key.code == sf::Keyboard::A || sf::Keyboard::Left;}
bool EventService::pressedRightKey() { return game_event.key.code == sf::Keyboard::D || sf::Keyboard::Right;}