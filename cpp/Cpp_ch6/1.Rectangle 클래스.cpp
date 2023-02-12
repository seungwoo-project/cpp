#include <iostream>

using namespace std;
class Rectangle {
	public:
		int width;
		int height;

		int calArea(int width,int height) {
			return width * height;
		}

	};
int main()
{
	Rectangle rect;
	rect.height = 4;
	rect.width = 3;

	cout << rect.calArea(rect.width,rect.height) << endl;
	return 0;
}