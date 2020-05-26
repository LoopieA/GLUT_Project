#include "Point.h"
#include "EngineGlut.h";

// Point constructor
Point::Point()
{
    SetPoint(0, 0);
}

Point::Point(double x, double y)
{
    SetPoint(x, y);
}
 
// Point member function
void Point::SetPoint(double x_coord, double y_coord)
{
    x = x_coord;
    y = y_coord;
}

void Point::draw()
{
    EngineGlut e;
    e.drawPoint(this->x, this->y);
}