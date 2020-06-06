#ifndef SHAPE_H
#define SHAPE_H
#include "EngineGlut.h"

class Shape
{
	protected:
		EngineGlut engine;
	public:
		virtual void draw() {};
		virtual void print() { };
};
#endif //Shape