#include "Labs.h"
#include <iostream>
using namespace std;
Labs::Labs(string name, bool hasboss, int num) {
	labnum++;
	this->name = new string{ name };
	this->hasboss = hasboss;
	this->num = num;
}

void Labs::addStudent(int n) {
	this->num += n;
}

void Labs::print() {
	if (name == nullptr)
		cout << "연구실 정보가 없습니다." << endl;
	else
	{
		cout << "연구실 번호: " << labnum << endl;
		cout << "연구실 이름: " << *name << endl;
		cout.setf(ios_base::boolalpha);
		cout << "실장 여부: " << hasboss << endl;
		cout << "연구실 인원: " << num << endl;
		for(Student s : student)
		s.print();
	}
}

int Labs::getNumber()
{
	return num;
}

Labs& Labs::checkNumber(Labs& lab)
{
	if (this->num > lab.getNumber())
		return *this;
	else
		return lab;
}

void Labs::moreNumber()
{
	cout << *name << " 인원이 더 많다." << endl;
}

void Labs::setStudent(Student s)
{
	student.push_back(s);
}
//
void applyLab(Labs& lab, int num)
{
	lab.addStudent(num);
	cout << "학생 정보를 입력/추가하시오" << endl;
	for (int i = 0; i < num; i++)
	{	
		string name;
		string hb;
		cin >> name >> hb;
		Student* students = new Student{name,hb};
		lab.setStudent(*students);
		
	}
}

Labs& createLab()
{
	Labs lab{ "신호처리 연구실",0,1 };
	return lab;
}
