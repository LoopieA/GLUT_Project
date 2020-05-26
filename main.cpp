#include <iostream>
#include <io.h>
#include <math.h>
#include "EngineGlut.h"
#include <windows.h>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"

#define PI 3.1415
void drawSinus()
{
    EngineGlut e;
    
    //x from (-400,+400)
    //y = 100*sin(x)
    for (float i=0; i<360; i+=1)
    {
	float x = 180-i;
	float y = 100*sin(i/180*PI);
	e.drawPoint(x, y);
    }
}

void drawLineAnimation()
{
    EngineGlut e;
    
    for (int i=-200; i<0; i+=10)
    {
	    e.drawClear();
	    e.drawLine(i,0,i+300,200);
	    Sleep(1);
    }
}

void drawTriangleAnimation()
{
    //EngineGlut e;
    Point pointA(-100, 0);
    Point pointB(-10, 0);
    Point pointC(-10, -100);
    
    //pointje.draw();
    /*Line lineAB(pointA, pointB);
    Line lineBC(pointB, pointC);
    Line lineAC(pointA, pointC);
    lineAB.draw();
    lineBC.draw();
    lineAC.draw();*/
    Triangle triangle(pointA, pointB, pointC, false);
    triangle.draw();
    Sleep(1);
}

void DrawRectangleAnimation()
{
    Point pointA(-100, 0);
    My_Rectangle rectangle(pointA, 200, 100, true);
    rectangle.draw();
}

int main(int argc, char ** argv)
{
    //init
    initEngineGlut(argc, argv);
    //drawSinus();
    //drawTriangleAnimation();
    DrawRectangleAnimation();
    std::cin.ignore();
}
