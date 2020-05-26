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
	//Airplane(Triangle triangle1, My_Rectangle rectangle1, My_Rectangle rectangle2, My_Rectangle rectangle3, Line line1, Line line2, Point point1, Point point2);
};

#endif //Airplane