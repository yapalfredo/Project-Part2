#pragma once
/*---------------------------------------------------------------------------*/
/**
 * world class
 *
 */
#include "robot.h"
#include "dirt.h"
#include "cat.h"
#include "frog.h"
class world {
private:
	robot rosie;
	dirt  spots[MAX_SPOTS];
	int   num_spots;
	cat   felix;
	frog kermit;
public:
	world() { num_spots = 0; }
	void  setRobot(int x, int y);
	void  setCat(int x, int y);
	void  setFrog(int x, int y);
	void  setSpot(int x, int y);
	int   findSpot(int x, int y) const;
	void  robotRoam();
	void  print() const;
};