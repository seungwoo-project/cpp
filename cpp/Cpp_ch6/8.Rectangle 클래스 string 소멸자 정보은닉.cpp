//생성자와 소멸자 호출 순서 시험문제  -> 전역변수로도 만들어보고 지역변수로도 만들어보고 호출순서 알아보기

#include <iostream>
#include <string>
#include "rectangle.h"
using namespace std;

int main()
{
	//정보 은닉
	rectangle rect{ 5,5,"red" };
	rect.print();

	return 0;
}