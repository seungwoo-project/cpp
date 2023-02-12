//4번 – p.476 3번 문제
#include <iostream>

using namespace std;

class Employee {
private:
	string name;
	int salary;
public:
	Employee() {}
	Employee(string n,int s) : name{n}, salary{s} {}
	string getname()
	{
		return name;
	}

	int getsalary()
	{
		return salary;
	}

	void setname(string n)
	{
		name = n;
	}

	void setsalary(int s)
	{
		salary = s;
	}
	virtual int computeSalary() 
	{
		return salary;
	}
	void print()
	{
		cout << "이름: " << name << endl;
		cout << "월급: " << salary << endl;
	}
};

class Manager : public Employee
{
private:
	int bonus;
public:
	Manager(string n, int s, int b): bonus{b}, Employee(n,s) {}
	int getbonus()
	{
		return bonus;
	}
	void setbonus(int b)
	{
		bonus = b;
	}
	int computeSalary() override
	{
		return getsalary() + bonus;
	}
	void print()
	{
		Employee::print();
		cout << "보너스: " << bonus << endl;
		cout << "전체 급여: " << computeSalary() << endl;
	}
};

int main()
{
	Manager m1{ "김철수", 200,100 };
	m1.print();
}