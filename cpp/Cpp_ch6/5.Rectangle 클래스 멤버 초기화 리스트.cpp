#include <iostream>

using namespace std;
class Rectangle {
private:    //�����̺��� ���� ���� �Ұ�
	int width;
	int height;
public:
	Rectangle()
		:width{5},height{6}
	{
		cout << "�⺻ ������ + ��� �ʱ�ȭ ����Ʈ" << endl;
		cout << "�簢�� �ʺ�: " << width << endl;
		cout << "�簢�� ����: " << height << endl;
	}
	Rectangle(int w, int h)
		:width{w},height{h}
	{

		//������ ���ο� ���Կ����ڰ� �� �Ǹ� ���������� ���Ե� ���� ��µ�
		cout << "�Ķ���Ͱ� �ִ� ������ + ��� �ʱ�ȭ ����Ʈ" << endl;
		cout << "�簢�� �ʺ�: " << width << endl;
		cout << "�簢�� ����: " << height << endl;
	}

};
int main()
{
	Rectangle rect0; //rect0{} �� ����
	Rectangle rect1{ 7,8 };

	return 0;
}