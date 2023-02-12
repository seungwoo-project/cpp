#include <iostream>

using namespace std;
class Rectangle {
private:    //프라이빗은 직접 접근 불가
	int width;
	int height;
public:
	int calArea() {
		return width * height;
	}

	int getWidth() {
		return width;
	}
	
	int getHeight() {
		return height;
	}

	void setRect(int x,int y) {
		width = x;
		height = y;
	}

};
int main()
{
	Rectangle rect;
	rect.setRect(3, 4);

	cout << "사각형 너비: " << rect.getWidth() << endl;
	cout << "사각형 높이: " << rect.getHeight() << endl;
	cout << "사각형 넓이: " << rect.calArea() << endl;
	
	return 0;
}