#ifndef POINT_H
#define POINT_H
#include "Shape.h"

class Point: public Shape
{
private:
	double x, y;
public:
	Point();
	Point(double x, double y);
	void SetPoint(double x, double y);
	double getX(){ return x; };
	double getY(){ return  y; };
	void draw();
};

#endif // Point
