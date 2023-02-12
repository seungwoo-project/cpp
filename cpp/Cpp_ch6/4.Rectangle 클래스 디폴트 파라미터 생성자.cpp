#include <iostream>

using namespace std;
class Rectangle {
private:    //프라이빗은 직접 접근 불가
	int width;
	int height;
public:
	//디폴트 파라미터 생성자
	Rectangle(int w=10, int h=10) {
		width = w;
		height = h;
		cout << "디폴트 파라미터 있는 생성자" << endl;
		cout << "사각형 너비: " << width << endl;
		cout << "사각형 높이: " << height << endl;
	}

};
int main()
{
	Rectangle rect0; //rect0{} 도 가능
	Rectangle rect1{ 7,8 };

	return 0;
}