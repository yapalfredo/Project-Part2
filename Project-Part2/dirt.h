#pragma once
/**
 * dirt class
 *
 * dirt is a kind of point that reacts when it is vacuumed
 *
 */
#include "point.h"
class dirt : public point {
private:
	bool gone;
public:
	dirt() { gone = false; }
	void disappear();
};