#include <iostream>

using namespace std;

class Base
{
public:
	Base()
	{
		cout << "�θ� ������" << endl;
	}
	virtual ~Base() // �����Լ�
	{
		cout << "�θ� �Ҹ���" << endl;
	}
	virtual void func()
	{
		cout << "�θ� �Լ�" << endl;
	}
};

class Derived : public Base
{
public:
	Derived()
	{
		cout << "�ڽ� ������" << endl;
	}
	~Derived()
	{
		cout << "�ڽ� �Ҹ���" << endl;
	}
	virtual void func() override //override �ϸ� �θ𿡼� �� �Լ��̸� ��ȯ�� �� �Ȱ��ƾ���
	{
		cout << "�ڽ� �Լ�" << endl;
	}


};
void something(Base& b)
{
	b.func();
}
int main()
{
	//Base* base = new Derived;  //�θ�Ŭ������ �ڽ�Ŭ���� ����Ű�� ���� ���� ��->�� �� �ȵ�
	//base->func();
	Derived d;
	something(d);
	//Base& base2 = d;
	//base2.func();
	//delete base; //virtual �Լ��� �Ⱦ��� ��ü�� Ÿ�Ը����� ����Ʈ���ִ¹ݸ� virtual�� ���� ���ü�� ������ ����Ű���� Ȯ������
}