#ifndef Rectangle_H
#define Rectangle_H
#include "Point.h"
#include "Shape.h"

class My_Rectangle: public Shape
{
private:
	Point first, second, third, fourth;
	bool fill;
public:
	My_Rectangle();
	My_Rectangle(Point first, int width, int height, bool fill);
	~My_Rectangle();
	void SetRectangle(Point first, int width, int height, bool fill);
	//Point* getLine() { Point line[2]; line[0] = first; line[1] = second; return line; };
	My_Rectangle operator*(const double n);
	void draw();
	friend std::ostream& operator<<(std::ostream& os, const My_Rectangle& p);
	void print();
};

#endif // Rectangle

