#include <iostream>

using namespace std;
class Rectangle {
private:    //프라이빗은 직접 접근 불가
	int width;
	int height;
public:
	Rectangle() {
		width = 5;
		height = 5;
		cout << "파라미터가 없는 기본 생성자" << endl;
		cout << "사각형 너비: " << width << endl;
		cout << "사각형 높이: " << height << endl;
	}
	Rectangle(int w, int h) {
		width = w;
		height = h;
		cout << "파라미터가 있는 생성자" << endl;
		cout << "사각형 너비: " << width << endl;
		cout << "사각형 높이: " << height << endl;
	}

};
int main()
{
	Rectangle rect0; //rect0{} 도 가능
	Rectangle rect1{7,8};

	return 0;
}