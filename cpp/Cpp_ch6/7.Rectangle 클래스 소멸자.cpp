//�����ڿ� �Ҹ��� ȣ�� ���� ���蹮��  -> ���������ε� ������ ���������ε� ������ ȣ����� �˾ƺ���

#include <iostream>

using namespace std;
class Rectangle {
private:    //�����̺��� ���� ���� �Ұ�
	int width;
	int height;
public:
	Rectangle()
	{
		cout << "������ ȣ��" << endl;
	}
	~Rectangle()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}
	

};
int main()
{
	//���� �޸� �Ҵ�
	Rectangle* rect = new Rectangle; //rect0{} �� ����
	delete rect;

	return 0;
}