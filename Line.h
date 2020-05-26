#ifndef LINE_H
#define LINE_H
#include "Point.h"

class Line
{
private:
	Point first, second;
public:
	Line();
	Line(Point first, Point second);
	void SetLine(Point first, Point second);
	Point* getLine() { Point line[2]; line[0] = first; line[1] = second; return line; };
	void draw();
};

#endif // Line
#pragma once
