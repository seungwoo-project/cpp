#include <iostream>

using namespace std;
class Rectangle {
private:    //�����̺��� ���� ���� �Ұ�
	int width;
	int height;
public:
	int calArea() {
		return width * height;
	}

	int getWidth() {
		return width;
	}
	
	int getHeight() {
		return height;
	}

	void setRect(int x,int y) {
		width = x;
		height = y;
	}

};
int main()
{
	Rectangle rect;
	rect.setRect(3, 4);

	cout << "�簢�� �ʺ�: " << rect.getWidth() << endl;
	cout << "�簢�� ����: " << rect.getHeight() << endl;
	cout << "�簢�� ����: " << rect.calArea() << endl;
	
	return 0;
}