#pragma once
#include "creature.h"
class robot : public creature {
private:
	int num_vacuumed;
public:
	robot() { num_vacuumed = 0; }
	void vacuum();
	bool busy(int num_spots);
	void speak();
};