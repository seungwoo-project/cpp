#include <iostream>
#include <string>

using namespace std;

int main()
{
	// p.353, 1�� ����
	int num;
	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;
	int* p = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}
	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
	{
		cout << p[i] << ", ";
	}
	delete[] p;
	return 0;

	// p.353, 2�� ����
	int num;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> num;
	string* ptr = new string[num];
	for (int i = 0; i < num; i++)
	{
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> ptr[i];
	}
	cout << endl;
	cout << "������ �̸� ����Դϴ�. " << endl;
	for (int i = 0; i < num; i++)
	{
		cout << "�̸� #" << i + 1 << ": " << ptr[i] << endl;
	}
	delete[] ptr;
	return 0;
}
