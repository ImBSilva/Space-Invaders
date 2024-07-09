#include "ServiceLocator.h"
#include "EventService.h"

namespace Global
{   
    using namespace Graphic;
    using namespace Time;
    using namespace Event;
    using namespace Player;

    // Constructor: Initializes the graphic_service pointer to null and creates services.
    ServiceLocator::ServiceLocator() {
        graphic_service = nullptr; // Initialize graphic_service to null
        event_service = nullptr; // Initialize event_service to null
        time_service = nullptr; // Initialize time_service to null
        player_service = nullptr; // Initialize player_service to null

        createServices(); // Call createServices to instantiate services
    }

    // Destructor: Cleans up resources by clearing all services.
    ServiceLocator::~ServiceLocator() {
        clearAllServices(); // Call clearAllServices to delete any allocated services	
    }

    // Creates service instances, specifically the graphic service in this case.
    void ServiceLocator::createServices() {
        graphic_service = new Graphic::GraphicService(); // Dynamically create a GraphicService instance
        event_service = new Event::EventService(); // Dynamically create a EventService instance
        time_service = new Time::TimeService(); // Dynamically create a TimeService instance
        player_service = new Player::PlayerService(); // Dynamically create a PlayerService instance
    }

    // Deletes allocated services to prevent memory leaks, specifically the graphic service.
    void ServiceLocator::clearAllServices() {
        delete(graphic_service); // Delete the graphic_service instance
        graphic_service = nullptr; // Reset pointer to null to avoid dangling pointer
        delete(event_service); // Delete the event_service instance
        delete(time_service); // Delete the time_service instance
        delete(player_service);
    }

    // Returns a pointer to ServiceLocator.
    ServiceLocator* ServiceLocator::getInstance() {
        static ServiceLocator instance; // we will discuss what 'static' means at a later time.
        return &instance; // Return address of the instance
    }

    // Calls initialize on the graphic service, readying it for use.
    void ServiceLocator::initialize() {
        graphic_service->initialize(); // Initialize graphic service
        event_service->initialize();
        time_service->initialize();
        player_service->initialize();
    }

    // Updates the state of the graphic service.
    void ServiceLocator::update() {
        graphic_service->update(); // Update graphic service
        event_service->update();
        time_service->update();
        player_service->update();
    }

    // Renders using the graphic service.
    void ServiceLocator::render() {
        graphic_service->render(); // Render graphic service
    }

    // Returns a pointer to the currently set graphic service.
    GraphicService* ServiceLocator::getGraphicService() { return graphic_service; }
    Event::EventService* ServiceLocator::getEventService() { return event_service; }
    Player::PlayerService* ServiceLocator::getPlayerService() { return player_service; }
    Time::TimeService* ServiceLocator::getTimeService() { return time_service; };

}
