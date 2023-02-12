//3번 – p.470 student 클래스 작성
#include <iostream>

using namespace std;

class Person
{
private:
	int birthYear;
	string name;
public:
	Person(string n,int by) : name{n} , birthYear{by} {}
	void print()
	{
		cout << "성명: " << name << endl;
		cout << "출생연도: " << birthYear << endl;
	}
};

class Student : public Person
{
private:
	string university;
public:
	Student(string n, int by, string u) : university{u}, Person(n, by) {}
	void print()
	{
		Person::print();
		cout << "대학교: " << university << endl;
	}
};

int main()
{
	Student s1{ "홍길동",1997,"한국대학교" };
	s1.print();
	return 0;

}