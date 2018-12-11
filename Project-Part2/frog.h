#pragma once
#include "creature.h"

class frog : public creature {
public:
	void move();
	void move(direction d);
	void speak();
};