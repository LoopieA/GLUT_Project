#ifndef Rectangle_H
#define Rectangle_H
#include "Point.h"

class My_Rectangle
{
private:
	Point first, second, third, fourth;
	bool fill;
public:
	My_Rectangle();
	My_Rectangle(Point first, int width, int height, bool fill);
	void SetRectangle(Point first, int width, int height, bool fill);
	//Point* getLine() { Point line[2]; line[0] = first; line[1] = second; return line; };
	void draw();
};

#endif // Rectangle

