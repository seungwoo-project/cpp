#include <iostream>

using namespace std;

class Animal
{
private:
	string name;
public:
	Animal(string name = " ")
		: name{ name }
	{
		cout << "animal 생성자" << endl;
	}
	~Animal()
	{
		cout << "animal 소멸자" << endl;
	}
	string getName()
	{
		return name;
	}

	virtual void speak()
	{
		cout << "???" << endl;
	}
};

class Cat : public Animal  //상속관계 접근지정자-부모클래스
{
public:
	Cat(string name)
		: Animal(name)
	{
		cout << "cat 생성자" << endl;
	}
	~Cat()
	{
		cout << "cat 소멸자" << endl;
	}
	//재정의 함수 오버라이드
	virtual void speak() override
	{
		cout << "냥" << endl;
	}
};
class Dog : public Animal  //상속관계 접근지정자-부모클래스
{
public:
	Dog(string name)
		: Animal(name)
	{
		cout << "dog 생성자" << endl;
	}
	~Dog()
	{
		cout << "dog 소멸자" << endl;
	}
	//재정의 함수 오버라이드
	virtual void speak() override
	{
		cout << "멍" << endl;
	}
};
int main()
{
	Cat cat("나비");
	Dog dog("흰둥이");

	Animal& animal0 = cat;
	Animal& animal1 = dog;

	animal0.speak(); //냥
	animal1.speak(); //멍
}
