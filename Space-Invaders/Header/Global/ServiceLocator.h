#pragma once

<<<<<<< HEAD:Space-Invaders/Header/Global/ServiceLocator.h
class GraphicService;
class EventService;
class PlayerService;
class TimeService;
=======
<<<<<<< Updated upstream:Space-Invaders/ServiceLocator.h
#include "GraphicService.h"
#include "EventService.h"

>>>>>>> parent of ea33e57 (Revert "inplement namespaces"):Space-Invaders/ServiceLocator.h

=======
>>>>>>> Stashed changes:Space-Invaders/Header/Global/ServiceLocator.h
// ServiceLocator Class Summary: This class manages access to various services in the application.
// include relevant headers files

namespace Global {

<<<<<<< HEAD:Space-Invaders/Header/Global/ServiceLocator.h
=======
<<<<<<< Updated upstream:Space-Invaders/ServiceLocator.h

>>>>>>> parent of ea33e57 (Revert "inplement namespaces"):Space-Invaders/ServiceLocator.h
class ServiceLocator
{
private:
    // Private Attributes:
    // Handles graphics-related tasks.
    GraphicService* graphic_service;
	EventService* event_service;
<<<<<<< HEAD:Space-Invaders/Header/Global/ServiceLocator.h
	PlayerService* player_service;
	TimeService* time_service;
=======
=======
    class EventService;
    class PlayerService;
    class TimeService;
>>>>>>> Stashed changes:Space-Invaders/Header/Global/ServiceLocator.h
>>>>>>> parent of ea33e57 (Revert "inplement namespaces"):Space-Invaders/ServiceLocator.h

    class ServiceLocator
    {
    private:
        // Private Attributes:
        // Handles graphics-related tasks.
        Graphic::GraphicService* graphic_service;
        Event::EventService* event_service;
        Player::PlayerService* player_service;
        Time::TimeService* time_service;

        // Private Constructor and Destructor:

        // Constructor for initializing the ServiceLocator.
        ServiceLocator();

        // Destructor for cleaning up resources upon object deletion.
        ~ServiceLocator();

<<<<<<< Updated upstream:Space-Invaders/ServiceLocator.h
    // Methods to Get Specific Services: 
    GraphicService* getGraphicService(); // Retrieve the GraphicService instance
    EventService* getEventService(); // Retrieve the GraphicService instance
<<<<<<< HEAD:Space-Invaders/Header/Global/ServiceLocator.h
    PlayerService* getPlayerService(); // Retrieve the PlayerService instance
    TimeService* getTimeService(); // Retrieve the TimeService instance
=======
=======
        // Private Methods:
        void createServices(); 			// Creates instances of all services.
        void clearAllServices(); 		//	Deletes and deallocates memory for all services.

    public:
        // Public Methods:
        static ServiceLocator* getInstance();  // Provides a method to access the unique ServiceLocator instance (object). We will discuss this later.

        void initialize(); 			//	Initializes the ServiceLocator.
        void update(); 				//	Updates all services.
        void render(); 				//	Renders using the services.

        // Methods to Get Specific Services: 
        Graphic::GraphicService* getGraphicService(); // Retrieve the GraphicService instance
        Event::EventService* getEventService(); // Retrieve the GraphicService instance
        Player::PlayerService* getPlayerService(); // Retrieve the PlayerService instance
        Time::TimeService* getTimeService(); // Retrieve the TimeService instance

    };
>>>>>>> Stashed changes:Space-Invaders/Header/Global/ServiceLocator.h
>>>>>>> parent of ea33e57 (Revert "inplement namespaces"):Space-Invaders/ServiceLocator.h


}
