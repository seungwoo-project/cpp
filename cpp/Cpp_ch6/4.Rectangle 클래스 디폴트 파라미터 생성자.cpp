#include <iostream>

using namespace std;
class Rectangle {
private:    //�����̺��� ���� ���� �Ұ�
	int width;
	int height;
public:
	//����Ʈ �Ķ���� ������
	Rectangle(int w=10, int h=10) {
		width = w;
		height = h;
		cout << "����Ʈ �Ķ���� �ִ� ������" << endl;
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