#pragma once
#include <iostream>

using namespace std;
class Student
{
private:
	string name;
	string hb; //�й�
public:
	Student(string n = " ", string h = " ") : name{ n }, hb{ h } {};
	void print();
};

