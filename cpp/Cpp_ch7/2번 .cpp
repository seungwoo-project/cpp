#include <iostream>
#include <array>
#include <vector>

using namespace std;
void swap(array<int, 5>& arr1, array<int, 5>& arr2);
int main()
{	
	array<int, 5>arr1{ 1,3,5,7,9 };
	array<int, 5>arr2{ 2,4,6,8,10 };
	cout << "ù��° array ���" << endl;
	for (int n : arr1)
		cout << n << " ";
	cout << endl;
	cout << "�ι�° array ���" << endl;
	for (int n : arr2)
		cout << n << " ";
	cout << endl;
	cout << "------------------------------" << endl;
	cout << "�迭 �� ��ȯ �Լ� ȣ�� ��" << endl;
	swap(arr1, arr2);
	cout << "ù��° array ���" << endl;
	for (int n : arr1)
		cout << n << " ";
	cout << endl;
	cout << "�ι�° array ���" << endl;
	for (int n : arr2)
		cout << n << " ";
	cout << endl;
	return 0;
}

void swap(array<int, 5>& arr1, array<int, 5>& arr2)
{
	arr1.swap(arr2);
}