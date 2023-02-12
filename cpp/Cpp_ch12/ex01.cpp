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
		cout << "animal ������" << endl;
	}
	~Animal()
	{
		cout << "animal �Ҹ���" << endl;
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

class Cat : public Animal  //��Ӱ��� ����������-�θ�Ŭ����
{
public:
	Cat(string name) 
		: Animal(name)
	{
		cout << "cat ������" << endl;
	}
	~Cat()
	{
		cout << "cat �Ҹ���" << endl;
	}
	//������ �Լ� �������̵�
	void speak()
	{
		
		Animal::speak();
		cout << "��" << endl;
	}
};
class Dog : public Animal  //��Ӱ��� ����������-�θ�Ŭ����
{
public:
	Dog(string name)
		: Animal(name)
	{
		cout << "dog ������" << endl;
	}
	~Dog()
	{
		cout << "dog �Ҹ���" << endl;
	}
	//������ �Լ� �������̵�
	void speak()
	{
		Animal::speak();
		cout << "��" << endl;
	}
};
int main()
{
	Animal animal;
	Cat cat("����");
	Dog dog("�����");
	animal.speak();
	cout << cat.getName() << " ";
	cat.speak();
	cout << dog.getName() << " ";
	dog.speak();
}
