#include "EngineGlut.h";
#include "Point.h"
#include "Rectangle.h"
#include"Line.h"
#include "Robot.h"

Robot::Robot()
{
    My_Rectangle head(*new Point(-40, 150), 75, 75, false);
    Point eye1(-20, 200);
    Point eye2(15, 200);
    Triangle nose(*(new Point(0, 175)), *(new Point(-5, 195)), *(new Point(-10, 175)), false);
    Line mouth(*new Point(-30, 165), *new Point(25, 165));
    Line neck(*new Point(-3, 150), *(new Point(-3, 100)));
    My_Rectangle body(*new Point(-75, -150), 150, 250, false);
    Line arm1(*new Point(-120, -25), *new Point(-75, 100));
    Line arm2(*new Point(-120, -25), *new Point(75, 100));
    Line leg1(*new Point(-50, -200), *new Point(-50, -150));
    Line leg2(*new Point(50, -200), *new Point(50, -150));
    head.draw();
    eye1.draw();
    eye2.draw();
    mouth.draw();
    nose.draw();
    neck.draw();
    body.draw();
    arm1.draw();
    arm2.draw();
    leg1.draw();
    leg2.draw();
}
