//6번 – p.514 2번 문제
#include <iostream>

using namespace std;

class Weapon
{
public:
	virtual void load() = 0;
};

class Bomb : public Weapon
{
public:
	Bomb()
	{
		load();
	}
	void load() override {
		cout << "폭탄을 적재합니다." << endl;
	}
};

class Gun : public Weapon
{
public:
	Gun()
	{
		load();
	}
	void load() override {
		cout << "총을 적재합니다." << endl;
	}
};
int main()
{
	Weapon* arr[]{ new Gun,new Bomb,new Bomb };
	delete arr[0];
	delete arr[1];
	delete arr[2];
}