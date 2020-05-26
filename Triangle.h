#ifndef Triangle_H
#define Triangle_H
#include "Point.h"

class Triangle
{
private:
	Point first, second, third;
	bool fill;
public:
	Triangle(Point first, Point second, Point third, bool fill);
	void SetTriangle(Point first, Point second, Point third, bool fill);
	Point* getLine() { Point line[2]; line[0] = first; line[1] = second; return line; };
	void draw();
};

#endif // Triangle
#pragma once