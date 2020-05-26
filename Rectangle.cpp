#include "EngineGlut.h";
#include "Point.h"
#include "Rectangle.h"
#include"Line.h"

// Point constructor
My_Rectangle::My_Rectangle(Point first, int width, int height, bool fill)
{
    SetRectangle(first, width, height, fill);
}

// Point member function
void My_Rectangle::SetRectangle(Point x_Point, int width_rec, int height_rec, bool fill_rec)
{
    first = x_Point;
    second = Point(x_Point.getX(), x_Point.getY() + height_rec);
    third = Point(x_Point.getX() + width_rec, x_Point.getY());
    fourth = Point(x_Point.getX() + width_rec, x_Point.getY() + height_rec);
    fill = fill_rec;
}

void My_Rectangle::draw()
{
    EngineGlut e;
    if (fill)
    {
        e.drawSurface(first.getX(), first.getY(), second.getX(), second.getY(), third.getX(), third.getY());
        e.drawSurface(second.getX(), second.getY(), fourth.getX(), fourth.getY(), third.getX(), third.getY());
    }    
    else
    {
        Line lineAB(first, second);
        Line lineAC(first, third);
        Line lineDC(third, fourth);
        Line lineBC(second, fourth);
        lineAB.draw();
        lineBC.draw();
        lineAC.draw();
        lineDC.draw();
    }
}