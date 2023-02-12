//1번 – p.434 3번 문제
#include <iostream>
using namespace std;

class Box {
private:
	int length;
	int width;
	int height;
public:
	static int count;
	Box(int l = 0, int w = 0, int h = 0) : length{ l }, width{ w }, height{ h } {
		count++; }
	int getVolume() const {
		return length * width * height;
	}
	void print()
	{
		cout << "상자 #" << count << endl;
		cout << "상자의 길이: " << length << endl;
		cout << "상자의 너비: " << width << endl;
		cout << "상자의 높이: " << height << endl;
		cout << "상자의 부피: " << getVolume() << endl;
	}
	bool operator< (Box& b) 
	{
		return (*this).getVolume() < b.getVolume();
	}
};
int Box::count = 0;
int main()
{
	Box a{ 10,10,10 };
	a.print();
	Box b{ 20,20,20 };
	b.print();
	cout.setf(ios_base::boolalpha);
	cout << (a < b);
}