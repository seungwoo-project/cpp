#include <iostream>
#include <string>
#include "Labs.h"
#include "Student.h"
using namespace std;
int Labs::labnum = 0;
int main()
{
	Student students[3] = {
		{"ȫ�浿","202201"},
		{"������","202202"},
		{"�̸���","202203"},
	};
	Labs lab02{ "����ó�� ������",true,3 };
	for (Student s : students)
		lab02.setStudent(s);
	lab02.print();

	applyLab(lab02, 2);
	cout << "---------------------------------" << endl;

	lab02.print();

}