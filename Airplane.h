#ifndef Airplane_H
#define Airplane_H
#include "Point.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Line.h"

class Airplane
{
private:
	Triangle triangle1;
	My_Rectangle rectangle1, rectangle2, rectangle3;
	Line line1, line2;
	Point point1, point2;
public:
	Airplane();
};

#endif //Airplane