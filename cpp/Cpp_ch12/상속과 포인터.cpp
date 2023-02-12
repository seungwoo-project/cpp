#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "부모 생성자" << endl;
	}
	virtual ~Base() // 가상함수
	{
		cout << "부모 소멸자" << endl;
	}
	virtual void func()
	{
		cout << "부모 함수" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "자식 생성자" << endl;
	}
	~Derived()
	{
		cout << "자식 소멸자" << endl;
	}
	virtual void func() override //override 하면 부모에서 쓴 함수이름 반환형 다 똑같아야함
	{
		cout << "자식 함수" << endl;
	}


};
void something(Base& b)
{
	b.func();
}
int main()
{
	//Base* base = new Derived;  //부모클래스가 자식클래스 가리키는 것은 가능 자->부 는 안됨
	//base->func();
	Derived d;
	something(d);
	//Base& base2 = d;
	//base2.func();
	//delete base; //virtual 함수를 안쓰면 객체의 타입만보고 딜리트해주는반면 virtual을 쓰면 어떤객체가 누구를 가리키는지 확인해줌
}