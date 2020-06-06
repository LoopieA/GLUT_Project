#ifndef Triangle_H
#define Triangle_H
#include "Point.h"
#include "Shape.h"

class Triangle: public Shape
{
private:
	Point first, second, third;
	bool fill;
public:
	Triangle();
	Triangle(Point first, Point second, Point third, bool fill);
	void SetTriangle(Point first, Point second, Point third, bool fill);
	Point* getLine() { Point line[2]; line[0] = first; line[1] = second; return line; };
	Triangle operator*(const double n);
	void draw();
	friend std::ostream& operator<<(std::ostream& os, const Triangle& p);
};

#endif // Triangle
#pragma once