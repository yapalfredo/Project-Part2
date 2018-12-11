/**
 * robot.cpp
 *
 * created: 1-sept-17/azhar (based on sklar’s robot4.cpp and parsons'  *rabbit.cpp)
 *
 * a sample simulation environment in which a robot looks for dirt to      *vacuum.
 * the robots' world contains dirt and one robot. the robot moves around
 * randomly until it finds some dirt and vacuums it.
 *
 *
 */

#include "robot.h"
 // vacuum up some dirt
void robot::vacuum() {
	cout << "shrooooop...";
	num_vacuumed++;
}

// the robot is busy until all the dirt has been found and vacuumed
bool robot::busy(int num_spots) {
	if (num_vacuumed < num_spots) {
		return true;
	}
	else {
		return false;
	}
}

void robot::speak() {
	cout << "vroom!\n";
}