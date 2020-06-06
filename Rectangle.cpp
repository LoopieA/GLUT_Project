#include "EngineGlut.h";
#include "Point.h"
#include "Rectangle.h"
#include"Line.h"

My_Rectangle::My_Rectangle()
{
    SetRectangle(*(new Point(0,0)), 0, 0, false);
}
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


My_Rectangle My_Rectangle::operator*(const double n)
{
    My_Rectangle res;
    this->first.SetPoint(first.getX() * n, first.getY() * n);
    this->second.SetPoint(second.getX() * n, second.getY() * n);
    this->third.SetPoint(third.getX() * n, third.getY() * n);
    this->fourth.SetPoint(fourth.getX() * n, fourth.getY() * n);
    res = *this;
    return res;
}

void My_Rectangle::draw()
{
    if (fill)
    {
        engine.drawSurface(first.getX(), first.getY(), second.getX(), second.getY(), third.getX(), third.getY());
        engine.drawSurface(second.getX(), second.getY(), fourth.getX(), fourth.getY(), third.getX(), third.getY());
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

std::ostream& operator << (std::ostream& out, const My_Rectangle& c)
{
    out << "First->" << c.first << "\n";
    out << "Second->" << c.second << "\n";
    out << "Third->" << c.third << "\n";
    out << "Fourth->" << c.fourth << "\n";
    return out;
}