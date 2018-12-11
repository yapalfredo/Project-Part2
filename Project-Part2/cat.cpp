#pragma once
#include "cat.h"

void cat::move() {
	direction d;
	d = static_cast<direction>(rand() % 4);
	move(d);
}

// overload the creature's move so cat can pounce (move 2 steps in any direction)
void cat::move(direction d) {
	int x = getX();
	int y = getY();
	// find a new x and y coordinate
	switch (d) {
	case north:
		y = (y + 2) % WORLD_SIZE;
		break;
	case south:
		y = (y - 2);
		if (y < 0) {
			y = WORLD_SIZE;
		}
		break;
	case east:
		x = (x + 2) % WORLD_SIZE;
		break;
	case west:
		x = (x - 2) % WORLD_SIZE;
		if (x < 0) {
			x = WORLD_SIZE;
		}
		break;
	}
	// set the location of the cat to those coordinates
	set(x, y);
}

void cat::speak() {
	cout << "meow!\n";
}