#pragma once
// filename: point.h
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

enum direction { north, east, south, west };
const int WORLD_SIZE = 5;
const int MAX_SPOTS = 6;

class point {
private:
	int x, y;
public:
	int getX() const;
	int getY() const;
	void set(int x, int y);
	void print() const;
};
