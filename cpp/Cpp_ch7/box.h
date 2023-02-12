#pragma once
#include <iostream>
#include <array>
#include <vector>
#include "box.h"
using namespace std;
class box
	
{
private:
	int width, height;
	char m;
public:
	box(int w = 3, int h = 3, char c = '*')
		:width{ w }, height{ h }, m{ c }{}

	void setBox(int h, int w, char c);
	void draw();
};

