#include "EngineGlut.h";
#include "Point.h"
#include "Rectangle.h"
#include"Line.h"
#include "Airplane.h"

Airplane::Airplane()
{
    Triangle triangle(*(new Point(0, 200)), *(new Point(-25, 250)), *(new Point(-50, 200)), false);
    My_Rectangle rectangle(*(new Point(-125, 125)), 200, 75, false);
    My_Rectangle rectangle1(*(new Point(-63, -75)), 75, 200, false);
    My_Rectangle rectangle2(*(new Point(-100, -113)), 150, 38, false);
    Line line1(*(new Point(-125, 200)), *(new Point(75, 127)));
    Line line2(*(new Point(-100, -75)), *(new Point(50, -112)));
    Point point1(-110,175);
    Point point2(55, 175);
    triangle.draw();
    rectangle.draw();
    rectangle1.draw();
    rectangle2.draw();
    line1.draw();
    line2.draw();
    point1.draw();
    point2.draw();
}
