#include <iostream>
#include <string>

using namespace std;

int main()
{
	// p.115, 1�� ����
	string str0, str1;
	cout << "ù ��° ���ڿ�: ";
	cin >> str0;
	cout << "�� ��° ���ڿ�: ";
	cin >> str1;

	if (str0 == str1)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	return 0;


	// p.117, 10�� ����
	int a, b, c;
	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++)
				if ((a * a) + (b * b) == (c * c))
					cout << a << " " << b << " " << c << endl;
	return 0;

	// p.120, 16�� ����
	int price = 50, end_price = 250, bet = 0, win = 0;

	cout << "�ʱ� �ݾ� $" << price << endl;
	cout << "��ǥ �ݾ� $" << end_price << endl;

	for (int i = 0; i < 1000; i++)
	{
		price = 50;
		while (1)
		{
			bet++;
			if ((double)rand() / RAND_MAX < 0.5) {
				price++;
			}
			else price--;

			if (price<=0 || price>=end_price)
				break;
		}
		if (price == end_price)	
			win++;
	}
	cout << "1000 ���� " << win << "�� �¸�" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "�̱� Ȯ��=" << win / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << bet / 1000.0 << endl;

	return 0;
}