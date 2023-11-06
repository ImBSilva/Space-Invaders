#pragma once
#include "../../header/Graphics/GraphicService.h"
#include "../../header/Event/EventService.h"
#include "../../header/UI/UIService.h"
#include "../../header/Player/PlayerService.h"
#include "../../header/Time/TimeService.h"
#include "../../header/Sound/SoundService.h"
#include "../../header/Enemy/EnemyService.h"
#include "../../header/Gameplay/GameplayService.h"
#include "../../header/Elements/ElementService.h"
#include "../../header/Bullet/BulletService.h"
#include "../../header/Powerup/PowerupService.h"
#include "../../header/Collision/CollisionService.h"
#include "../../header/Particle/ParticleService.h"

namespace Global
{
    class ServiceLocator
    {
    private:
        Event::EventService* event_service;
        Graphics::GraphicService* graphic_service;
        UI::UIService* ui_service;
        Time::TimeService* time_service;
        Sound::SoundService* sound_service;
        Gameplay::GameplayService* gameplay_service;
        Player::PlayerService* player_service;
        Enemy::EnemyService* enemy_service;
        Element::ElementService* element_service;
        Bullet::BulletService* bullet_service;
        Powerup::PowerupService* powerup_service;
        Collision::CollisionService* collision_service;
        Particle::ParticleService* particle_service;

        ServiceLocator();
        ~ServiceLocator();

        void createServices();
        void clearAllServices();

    public:
        static ServiceLocator* getInstance();

        void initialize();
        void update();
        void render();

        Event::EventService* getEventService();
        Graphics::GraphicService* getGraphicService();
        UI::UIService* getUIService();
        Time::TimeService* getTimeService();
        Sound::SoundService* getSoundService();
        Gameplay::GameplayService* getGameplayService();
        Player::PlayerService* getPlayerService();
        Enemy::EnemyService* getEnemyService();
        Element::ElementService* getElementService();
        Bullet::BulletService* getBulletService();
        Powerup::PowerupService* getPowerupService();
        Collision::CollisionService* getCollisionService();
        Particle::ParticleService* getParticleService();
        void deleteServiceLocator();
    };
}