#include <iostream>

using namespace std;
class Rectangle {
private:    //프라이빗은 직접 접근 불가
	int width;
	int height;
public:
	Rectangle()
		:width{5},height{6}
	{
		cout << "기본 생성자 + 멤버 초기화 리스트" << endl;
		cout << "사각형 너비: " << width << endl;
		cout << "사각형 높이: " << height << endl;
	}
	Rectangle(int w, int h)
		:width{w},height{h}
	{

		//생성자 내부에 대입연산자가 또 되면 마지막으로 대입된 값이 출력됨
		cout << "파라미터가 있는 생성자 + 멤버 초기화 리스트" << endl;
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