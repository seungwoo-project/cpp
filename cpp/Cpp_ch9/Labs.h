#pragma once
#include "Student.h"
#include <iostream>
#include <vector>
using namespace std;
class Labs
{
private:
	string* name;	//연구실 이름
	bool hasboss;	//실장존재유무
	int num;  //소속 학생수
	static int labnum;
	vector<Student> student{};
public:
	Labs() :name{ nullptr }, hasboss{ 0 }, num{ 0 } {};
	Labs(string name, bool hasboss, int num);
	void addStudent(int n);
	void print();
	int getNumber();
	Labs& checkNumber(Labs& lab);
	void moreNumber();
	void setStudent(Student s);
};

void applyLab(Labs& lab, int num);
Labs& createLab();

