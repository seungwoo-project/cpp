#include <iostream>
#include <array>
#include <vector>
#include "box.h"
using namespace std;

int main()
{
	box box1;
	box1.draw();

	box1.setBox(5, 7, '^');
	box1.draw();
	return 0;
}

