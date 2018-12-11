/*-------------------------------------------------------------------------- - */

/**
 * main function
 *
 */

#include "world.h"

	int main() {
	world myworld;
	int x, y;

	// initialize random number generator
	srand(time(NULL));

	// place the robot and the spots in random locations in the world
	x = rand() % WORLD_SIZE;
	y = rand() % WORLD_SIZE;
	myworld.setRobot(x, y);
	x = rand() % WORLD_SIZE;
	y = rand() % WORLD_SIZE;
	myworld.setCat(x, y);

	x = rand() % WORLD_SIZE;
	y = rand() % WORLD_SIZE;
	myworld.setFrog(x, y);
	
	// let the robot roam around until it finds and cleans all the spots
	cout << "\nRobot roaming..." << endl;
	myworld.robotRoam();
	myworld.print();

	cout << "\nMy, what a clean world we live in :-)\n\n";
	system("pause");
} // end of main()



