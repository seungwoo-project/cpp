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
		cout << "먹을 수 있음" << endl;
	}
	void talk()
	{
		cout << "말할 수 있음" << endl;
	}
	void run()
	{
		cout << "뛸 수 있음" << endl;
	}
	void print()
	{
		cout << "나의 직업 : " << job << endl;
		cout << "나의 나이 : " << age << endl;
		run();
		talk();
	}
};

class Professor : public Person
{
public:
	Professor(int age, string job = "교수")
		:Person(age, job) {};

	void teach()
	{
		cout << "가리칠 수 있음" << endl;
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
	TennisPlayer(int age, string job = "테니스 선수")
		:Person(age,job) {}

	void playTennis()
	{
		cout << "테니스 경기를 할 수 있음" << endl;
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
	Businessman(int age, string job = "대표")
		:Person(age,job) {}

	void runBusiness()
	{
		cout << "사업을 운영할 수 있음" << endl;
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