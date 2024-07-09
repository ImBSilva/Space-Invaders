#pragma once

<<<<<<< HEAD
class PlayerController;

class PlayerService
{
private:
	PlayerController* player_controller;

public:
	PlayerService();
	~PlayerService();

	void initialize();
	void update();
	void render();
};
=======

namespace Player {

	class PlayerController;

	class PlayerService
	{
	private:
		PlayerController* player_controller;

	public:
		PlayerService();
		~PlayerService();

		void initialize();
		void update();
		void render();
	};

}
>>>>>>> parent of ea33e57 (Revert "inplement namespaces")
