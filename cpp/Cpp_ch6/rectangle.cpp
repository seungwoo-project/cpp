#include "rectangle.h"
#include <iostream>
inline int rectangle::calArea()
{
	return width * height;
}
void rectangle::print()
{
	std::cout << width << " " << height << " " << *color << std::endl;
}
