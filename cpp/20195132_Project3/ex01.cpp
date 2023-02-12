#include <iostream>
using namespace std;
class Vector
{
private:
	float x, y, z;
public:
	Vector() {}
	Vector(float x, float y, float z) :x{ x }, y{ y }, z{ z } {}
	//���׿����� +
	Vector operator+() const
	{
		return Vector{ +x,+y,+z };
	}
	//���׿����� -
	Vector operator-() const
	{
		return Vector{ -x,-y,-z };
	}
	//���׿����� +
	Vector operator+(const Vector& v) const
	{
		return Vector{ this->x + v.x, this->y + v.y, this->z + v.z };
	}
	//���׿����� -
	Vector operator-(const Vector& v) const
	{
		return Vector{ this->x - v.x, this->y - v.y, this->z - v.z };
	}
	//���׿����� *
	//���� �� ���� ���
	float operator*(const Vector& v) const
	{
		float dot = (x * v.x) + (y * v.y) + (z * v.z);
		return dot;
	}
	//��� ���ϱ�
	Vector operator*(float n) const
	{
		return Vector{ x * n,y * n,z * n };
	}
	//���׿����� /
	Vector operator/(float n) const
	{
		return Vector{ x / n,y / n,z / n };
	}
	//���������� ++, --
	Vector& operator++()
	{
		++x;
		++y;
		++z;
		return *this;
	}
	Vector& operator--()
	{
		--x;
		--y;
		--z;
		return *this;
	}
	//���������� ++, --
	Vector& operator++(int )
	{
		Vector temp = *this;
		++x;
		++y;
		++z;
		return temp;
	}
	Vector& operator--(int)
	{
		Vector temp = *this;
		--x;
		--y;
		--z;
		return temp;
	}

	void print()
	{
		cout << x << " " << y << " " << z << endl;
	}
};

int main()
{
	Vector v0{ 0,1,2 };
	Vector v1{ 1,2,3 };

	//Vector v2 = v0 + v1; //���׿����� +, v0.operatop+(v1);
	Vector v2 = v0.operator+(v1);
	v2.print();

	Vector v3 = -v1; //���׿����� - , v1.operator-();
	v3.print();

	//���׿����� *
	//���Ϳ���, ������� ->(v0.x*v1.x)+(v0.y*v1.y) = float
	//���� * �Ǽ��� -> ����

	float v4 = v0 * v1; //v0.operator*(v1)
	cout << v4 << endl; // 0+2+6=8

	Vector v5 = v1 * 3.0f; // v1.operator*(3.0f)
	v5.print();
	//++v1 ��������������
	//v1++ ��������������
	Vector v6 = ++v1; //v1.operator++()
	v6.print();
	Vector v7 = v1++;
	v7.print();
	v1.print();
//------------------------------------------------------------
	//���׿����� +
	Vector v10 = +v1;
	v10.print();
	//���׿����� -
	Vector v11 = v0 - v1;
	v11.print();
	//���׿����� /
	Vector v12 = v1 / 3.0f;
	v12.print();
	//���� ������ --
	Vector v8 = --v1;
	v8.print();
	//���� ������ --
	Vector v9 = v1--;
	v9.print();
	v1.print();
}