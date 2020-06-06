#include <iostream>
#include <io.h>
#include <math.h>
#include "EngineGlut.h"
#include <windows.h>
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Airplane.h"

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
    Point pointA(0, 200);
    Point pointB(-25, 250);
    Point pointC(-50, 200);
    
    pointA.draw();
    pointB.draw();
    pointC.draw();

    Triangle triangle(pointA, pointB, pointC, false);
    triangle.draw();
    Sleep(1);
}

void DrawRectangleAnimation()
{
    Point pointA(-100, 0);
    My_Rectangle rectangle(pointA, 200, 100, false);
    rectangle.draw();
}

void DrawLineAnimation()
{
    Point pointA(0, 200);
    Point pointB(-25, 250);
    Line lineAB(pointA, pointB);
    lineAB * 2;
    lineAB.draw();
}

void ZoomTriangleAnimationTest()
{
    Point pointA(0, -100);
    Point pointB(-25, -150);
    Point pointC(-50, -100);

    Triangle triangle(pointA, pointB, pointC, false);
    triangle * 2;
    triangle.draw();
}

void ZoomRectangleAnimationTest()
{
    Point pointA(-100, 0);
    My_Rectangle rectangle(pointA, 200, 100, false);
    rectangle * 2;
    rectangle.draw();
}

int main(int argc, char ** argv)
{
    //init
    initEngineGlut(argc, argv);
    //drawSinus();
    //drawTriangleAnimation();
    //DrawRectangleAnimation();
    //Airplane airplane;
    //DrawLineAnimation();
    //ZoomTriangleAnimationTest();
    ZoomRectangleAnimationTest();
    std::cin.ignore();
}
