#pragma once
/*---------------------------------------------------------------------------*/
/**
 * creature class
 *
 * a creature is a kind of point that moves around
 *
 */
#include "point.h"

class creature : public point {
public:
	void move();
	void move(direction d);
	virtual void speak() = 0;
};