#include "Line.h"
#include "EngineGlut.h";
#include "Point.h"
#include <iostream>
Line::Line()
{
    SetLine(*(new Point(0, 0)), *(new Point(0, 0)));
}
// Point constructor
Line::Line(Point first, Point second)
{
    SetLine(first, second);
}

// Point member function
void Line::SetLine(Point x_Point, Point y_Point)
{
    first = x_Point;
    second = y_Point;
}

Line Line::operator*(const double n)
{
    Line res;
    this->second.SetPoint(second.getX() * n, second.getY() * n);
    SetLine(first, second);
    res = *this;
    return res;
}

void Line::draw()
{
    engine.drawLine(first.getX(), first.getY(), second.getX(), second.getY());
}

std::ostream& operator << (std::ostream& out, const Line& c)
{
    out << "First->" << c.first << "\n";
    out << "Second->" << c.second << "\n";
    return out;
}