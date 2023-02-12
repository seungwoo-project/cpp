#include "box.h"

void box::setBox(int h, int w, char c)
{
	height = h;
	width = w;
	m = c;
}

void box::draw() {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << m;
		}
		cout << endl;
	}
}
