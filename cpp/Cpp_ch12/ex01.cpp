#include <iostream>

using namespace std;

class Animal
{
private:
	string name;
public :
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

	void speak()
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
	void speak()
	{
		
		Animal::speak();
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
	void speak()
	{
		Animal::speak();
		cout << "멍" << endl;
	}
};
int main()
{
	Animal animal;
	Cat cat("나비");
	Dog dog("흰둥이");
	animal.speak();
	cout << cat.getName() << " ";
	cat.speak();
	cout << dog.getName() << " ";
	dog.speak();
}
