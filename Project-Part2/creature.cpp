#include "creature.h"

// pick a random direction to move in, and then move one unit in that direction
void creature::move() {
	direction d;
	d = static_cast<direction>(rand() % 4);
	move(d);
}

// move in a specific direction, wrapping around if necessary.
// the overloaded function move provides this ability.
void creature::move(direction d) {
	int x = getX();
	int y = getY();
	// find a new x and y coordinate
	switch (d) {
	case north:
		y = (y + 1) % WORLD_SIZE;
		break;
	case south:
		y = (y - 1);
		if (y < 0) {
			y = WORLD_SIZE;
		}
		break;
	case east:
		x = (x + 1) % WORLD_SIZE;
		break;
	case west:
		x = (x - 1) % WORLD_SIZE;
		if (x < 0) {
			x = WORLD_SIZE;
		}
		break;
	}
	// set the location of the creature to those coordinates
	set(x, y);
}