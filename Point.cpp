#include "Point.h"
#include "EngineGlut.h";
#include <iostream>

// Point default constructor
Point::Point()
{
    SetPoint(0, 0);
}

// Point parameterized constructor
Point::Point(double x, double y)
{
    SetPoint(x, y);
}

Point::~Point()
{
}

// Point setter
void Point::SetPoint(double x_coord, double y_coord)
{
    this->x = x_coord;
    this->y = y_coord;
}

// Point draw function 
void Point::draw()
{
    engine.drawPoint(this->x, this->y);
}

// Rectangle overloaded cout operator
std::ostream& operator << (std::ostream& out, const Point& c)
{
    out << "The X coordinate of the point: " << c.x << "\n";
    out << "The Y coordinate of the point: " << c.y << "\n";
    return out;
}

void Point::print()
{
    std::cout << this;
}