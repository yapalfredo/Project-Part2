#pragma once
#pragma once
#include "creature.h"
class cat : public creature {
public:
	void move();
	void move(direction d);
	void speak();
};
