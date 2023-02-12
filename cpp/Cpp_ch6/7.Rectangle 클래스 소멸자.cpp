//생성자와 소멸자 호출 순서 시험문제  -> 전역변수로도 만들어보고 지역변수로도 만들어보고 호출순서 알아보기

#include <iostream>

using namespace std;
class Rectangle {
private:    //프라이빗은 직접 접근 불가
	int width;
	int height;
public:
	Rectangle()
	{
		cout << "생성자 호출" << endl;
	}
	~Rectangle()
	{
		cout << "소멸자 호출" << endl;
	}
	

};
int main()
{
	//동적 메모리 할당
	Rectangle* rect = new Rectangle; //rect0{} 도 가능
	delete rect;

	return 0;
}