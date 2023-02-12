#include <iostream>

using namespace std;

class Person
{
protected:
	int age;
	string job;
public:
	Person (int age=0,string job=" ") : age{ age }, job{ job } {}
	void eat()
	{
		cout << "���� �� ����" << endl;
	}
	void talk()
	{
		cout << "���� �� ����" << endl;
	}
	void run()
	{
		cout << "�� �� ����" << endl;
	}
	void print()
	{
		cout << "���� ���� : " << job << endl;
		cout << "���� ���� : " << age << endl;
		run();
		talk();
	}
};

class Professor : public Person
{
public:
	Professor(int age, string job = "����")
		:Person(age, job) {};

	void teach()
	{
		cout << "����ĥ �� ����" << endl;
	}
	void print()
	{
		Person::print();
		teach();
	}
};

class TennisPlayer : public Person
{
public:
	TennisPlayer(int age, string job = "�״Ͻ� ����")
		:Person(age,job) {}

	void playTennis()
	{
		cout << "�״Ͻ� ��⸦ �� �� ����" << endl;
	}
	void print()
	{
		Person::print();
		playTennis();
	}
};

class Businessman : public Person
{
public:
	Businessman(int age, string job = "��ǥ")
		:Person(age,job) {}

	void runBusiness()
	{
		cout << "����� ��� �� ����" << endl;
	}
	void print()
	{
		Person::print();
		runBusiness();
	}
};




int main()
{
	Professor prof(38);
	prof.print();
	cout << "-------------------------" << endl;
	TennisPlayer player(23);
	player.print();
	cout << "-------------------------" << endl;
	Businessman man(45);
	man.print();
}