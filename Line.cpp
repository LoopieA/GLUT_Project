#include "Line.h"
#include "EngineGlut.h";
#include "Point.h"
#include <iostream>

// Line default constructor
Line::Line()
{
    SetLine(*(new Point(0, 0)), *(new Point(0, 0)));
}
// Line parameterzied constructor
Line::Line(Point first, Point second)
{
    SetLine(first, second);
}

// Line destructor
Line::~Line()
{
}

// Line setter
void Line::SetLine(Point x_Point, Point y_Point)
{
    first = x_Point;
    second = y_Point;
}

// Line zoom in/out overloaded operator
Line Line::operator*(const double n)
{
    Line res;
    this->second.SetPoint(second.getX() * n, second.getY() * n);
    SetLine(first, second);
    res = *this;
    return res;
}

// Line draw function
void Line::draw()
{
    engine.drawLine(first.getX(), first.getY(), second.getX(), second.getY());
}

// Line overloaded cout operator
std::ostream& operator << (std::ostream& out, const Line& c)
{
    out << "First->" << c.first << "\n";
    out << "Second->" << c.second << "\n";
    return out;
}

void Line::print()
{
    std::cout << this;
}
