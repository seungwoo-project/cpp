#include <iostream>
using namespace std;

			//�߻� Ŭ���� = �������̽� -> ��ü�� ��� �Ұ���
class Shape //�θ� shape �� � ��������?? ��,,�簢��,,������,, ���̸� ������.. ������Ǹ� ���� but ���������Լ� ����ϸ� ����
{
public:
	virtual double getArea() = 0; //���� ���� �Լ�
	
};

class Circle : public Shape //shape �߻�Ŭ�������ִ� getArea()�Լ��� �Ⱦ��� Circle�̶�� ��ü ������ �ȵ� ������ �ۼ��������!
{
private:
	int radius;
public:
	Circle(int r) : radius{r} {}
	virtual double getArea() override
	{
		return radius * radius * 3.14;
	}
};
class Rectangle : public Shape //shape �߻�Ŭ�������ִ� getArea()�Լ��� �Ⱦ��� Rectangle�̶�� ��ü ������ �ȵ� ������ �ۼ��������!
{
private:
	int width; int height;
public:
	Rectangle(int w, int h) : width{ w }, height{ h } {}
	virtual double getArea() override
	{
		return width * height;
	}
};

int main()
{
	Circle c(10);
	cout << c.getArea() << endl;

	Rectangle rect(10, 10);
	cout << rect.getArea() << endl;
}