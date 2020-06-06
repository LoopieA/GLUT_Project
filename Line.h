#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include "Shape.h"

class Line: public Shape
{
private:
	Point first, second;
public:
	Line();
	Line(Point first, Point second);
	void SetLine(Point first, Point second);
	Point* getLine() { Point line[2]; line[0] = first; line[1] = second; return line; };
	Line operator*(const double n);
	void draw();
	friend std::ostream& operator<<(std::ostream& os, const Line& p);
};

#endif // Line
#pragma once
