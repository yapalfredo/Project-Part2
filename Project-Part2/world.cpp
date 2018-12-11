#include "world.h"
void world::setRobot(int x, int y) {
	rosie.set(x, y);
}

void world::setCat(int x, int y) {
	felix.set(x, y);
}

void world::setFrog(int x, int y) {
	kermit.set(x, y);
}

void world::setSpot(int x, int y) {
	if (num_spots + 1 <= MAX_SPOTS) {
		spots[num_spots++].set(x, y);
	}
}


int world::findSpot(int x, int y) const {
	bool found = false;
	int  index = 0;
	while ((!found) && (index < num_spots)) {
		if ((x == spots[index].getX()) &&
			(y == spots[index].getY())) {
			found = true;
		}
		index++;
	}
	if (found) {
		return(index);
	}
	else {
		return(-1);
	}
} // end of findSpot()


// make the robot roam around. if it finds a spot, it vacuums it up.
// it does this as long as it is "busy", i.e., as long as there are spots
// in the world that need to be cleaned.
void world::robotRoam() {
	int index;

	felix.move();
	setSpot(felix.getX(), felix.getY());
	felix.speak();

	kermit.move();
	setSpot(kermit.getX(), kermit.getY());
	kermit.speak();

	while (rosie.busy(num_spots)) {
		rosie.move();
		rosie.speak();
		rosie.print();
		if ((index = findSpot(rosie.getX(), rosie.getY())) > 0) {
			rosie.vacuum();
			spots[index].disappear();
		}
		felix.move();
		setSpot(felix.getX(), felix.getY());
		felix.speak();

		kermit.move();
		setSpot(kermit.getX(), kermit.getY());
		kermit.speak();
	}
} // end of robotRoam()


// printing the world is printing the location of the objects in the
// world. we use their print methods to do this.
void world::print() const {
	cout << "\nRosie is at: ";
	rosie.print();
	cout << "\nThe spots are at: " << endl;
	for (int i = 0; i < num_spots; i++) {
		spots[i].print();
	}
} // end of print()



/*---------------------------------------------------------------------------*/