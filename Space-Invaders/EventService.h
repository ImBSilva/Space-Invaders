#pragma once
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

namespace Event {

	class EventService
	{
	private:
		sf::Event game_event; //event var
		sf::RenderWindow* game_window; //ptr to our game window

<<<<<<< Updated upstream:Space-Invaders/EventService.h


public:
	EventService();
	~EventService();

	void initialize();
	void update();
	void processEvents(); // while window is open we will check for events
	bool pressedEscapeKey();
	bool isKeyboardEvent();
=======
		bool isGameWindowOpen();
		bool gameWindowWasClosed(); //for the condition we already had - the title bar cross.
		bool hasQuitGame(); //for our new 'ESC' condition

	public:
		EventService();
		~EventService();

		void initialize();
		void update();
		void processEvents(); // while window is open we will check for events
		bool pressedEscapeKey();
>>>>>>> Stashed changes:Space-Invaders/Header/Event/EventService.h

		bool pressedLeftKey();
		bool pressedRightKey();
		bool isKeyboardEvent();

	};

}
