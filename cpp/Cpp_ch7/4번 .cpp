#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	string coffee;
	string text;
	int price=0;
	int jan;
	int sum=0;
	cout << "���������� 2000��, �Ƹ޸�ī�� 2500��, īǪġ�� 3000��" << endl;
	while (true)
	{
		cout << "�ֹ�: ";
		getline(cin,coffee);
		jan = (coffee.at(coffee.find('_') + 1) - '0');
		for (int i = 0; i < coffee.find('_'); i++) {
			cout << coffee.at(i);
			text += coffee.at(i);
		}
		if (text == "espresso") {
			price = 2000 * jan;
		}
		if (text == "americano") {
			price = 2500 * jan;
		}
		if (text == "cappuccino") {
			price = 3000 * jan;
		}
		sum += price;
		cout << "�� �� �ݾ��� " << price << "�Դϴ�." << endl;
		cout << "���� ������ " << sum << "�Դϴ�." << endl;
		text.clear();
		if (sum > 30000)
			break;
	}
	
	return 0;
}