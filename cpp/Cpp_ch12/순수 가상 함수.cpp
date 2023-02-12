#include <iostream>
using namespace std;

			//추상 클래스 = 인터페이스 -> 객체로 사용 불가능
class Shape //부모 shape 이 어떤 도형인지?? 원,,사각형,,마름모,, 넓이를 못구함.. 기능정의를 못함 but 순수가상함수 사용하면 가능
{
public:
	virtual double getArea() = 0; //순수 가상 함수
	
};

class Circle : public Shape //shape 추상클래스에있는 getArea()함수를 안쓰면 Circle이라는 객체 생성이 안됨 무조건 작성해줘야함!
{
private:
	int radius;
public:
	Circle(int r) : radius{r} {}
	virtual double getArea() override
	{
		return radius * radius * 3.14;
	}
};
class Rectangle : public Shape //shape 추상클래스에있는 getArea()함수를 안쓰면 Rectangle이라는 객체 생성이 안됨 무조건 작성해줘야함!
{
private:
	int width; int height;
public:
	Rectangle(int w, int h) : width{ w }, height{ h } {}
	virtual double getArea() override
	{
		return width * height;
	}
};

int main()
{
	Circle c(10);
	cout << c.getArea() << endl;

	Rectangle rect(10, 10);
	cout << rect.getArea() << endl;
}