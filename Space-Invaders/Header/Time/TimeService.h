#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <chrono>

using namespace std;

<<<<<<< HEAD
class TimeService {
private:
	float delta_time;
	std::chrono::time_point<std::chrono::steady_clock> previous_time;
	void updateDeltaTime();
	float calculateDeltaTime();
	void updatePreviousTime();

public:
	void initialize();
	void update();
	float getDeltaTime();
};
=======
namespace Time {

	class TimeService {
	private:
		float delta_time;
		std::chrono::time_point<std::chrono::steady_clock> previous_time;
		void updateDeltaTime();
		float calculateDeltaTime();
		void updatePreviousTime();

	public:
		void initialize();
		void update();
		float getDeltaTime();
	};

}
>>>>>>> parent of ea33e57 (Revert "inplement namespaces")
