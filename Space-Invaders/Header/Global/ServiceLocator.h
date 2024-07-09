#pragma once

class GraphicService;
class EventService;
class PlayerService;
class TimeService;

// ServiceLocator Class Summary: This class manages access to various services in the application.
// include relevant headers files


class ServiceLocator
{
private:
    // Private Attributes:
    // Handles graphics-related tasks.
    GraphicService* graphic_service;
	EventService* event_service;
	PlayerService* player_service;
	TimeService* time_service;

    // Private Constructor and Destructor:
    
    // Constructor for initializing the ServiceLocator.
    ServiceLocator(); 
    
    // Destructor for cleaning up resources upon object deletion.
    ~ServiceLocator(); 	

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
    GraphicService* getGraphicService(); // Retrieve the GraphicService instance
    EventService* getEventService(); // Retrieve the GraphicService instance
    PlayerService* getPlayerService(); // Retrieve the PlayerService instance
    TimeService* getTimeService(); // Retrieve the TimeService instance



};
