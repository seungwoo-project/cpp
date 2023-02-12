//2번 – p.435 5번 문제
#include <iostream>

using namespace std;

class Time {
private:
	int hours;
	int minutes;

public:
	Time(int h=0,int m=0) : hours{h}, minutes{m} {}
	void displayTime() {
		cout << hours << ": " << minutes << endl;
	}

	Time& operator++()
	{
		minutes++;
		if (minutes == 60) {
			minutes = 0;
			++hours;
			if (hours == 24)
				hours =0;
		}
		return *this;
	}
};
int main()
{
	Time t1{ 10,59 };
	t1.displayTime();
	++t1;
	t1.displayTime();
	++t1;
	t1.displayTime();
}