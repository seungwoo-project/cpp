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
		cout << "������ ������ �����ϴ�." << endl;
	else
	{
		cout << "������ ��ȣ: " << labnum << endl;
		cout << "������ �̸�: " << *name << endl;
		cout.setf(ios_base::boolalpha);
		cout << "���� ����: " << hasboss << endl;
		cout << "������ �ο�: " << num << endl;
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
	cout << *name << " �ο��� �� ����." << endl;
}

void Labs::setStudent(Student s)
{
	student.push_back(s);
}
//
void applyLab(Labs& lab, int num)
{
	lab.addStudent(num);
	cout << "�л� ������ �Է�/�߰��Ͻÿ�" << endl;
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
	Labs lab{ "��ȣó�� ������",0,1 };
	return lab;
}
