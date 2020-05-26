#include "EngineGlut.h";
#include "Point.h"
#include "Triangle.h"
#include"Line.h"

Triangle::Triangle()
{
    SetTriangle(*(new Point(0, 0)), *(new Point(0, 0)), *(new Point(0, 0)), false);
}

// Triangle constructor
Triangle::Triangle(Point first, Point second, Point third, bool fill)
{
    SetTriangle(first, second, third, fill);
}

// Triangle setter
void Triangle::SetTriangle(Point x_Point, Point y_Point, Point z_Point, bool fill_t)
{
    first = x_Point;
    second = y_Point;
    third = z_Point;
    fill = fill_t;
}

void Triangle::draw()
{
    EngineGlut e;
    if (fill)
        e.drawSurface(first.getX(), first.getY(), second.getX(), second.getY(), third.getX(), third.getY());
    else
    {
        Line lineAB(first, second);
        Line lineBC(second, third);
        Line lineAC(first, third);
        lineAB.draw();
        lineBC.draw();
        lineAC.draw();
    }
}