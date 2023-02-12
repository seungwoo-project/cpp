#include <iostream>
#include <string>

using namespace std;

int main()
{
	// p.115, 1번 문제
	string str0, str1;
	cout << "첫 번째 문자열: ";
	cin >> str0;
	cout << "두 번째 문자열: ";
	cin >> str1;

	if (str0 == str1)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;
	return 0;


	// p.117, 10번 문제
	int a, b, c;
	for (a = 1; a <= 100; a++)
		for (b = 1; b <= 100; b++)
			for (c = 1; c <= 100; c++)
				if ((a * a) + (b * b) == (c * c))
					cout << a << " " << b << " " << c << endl;
	return 0;

	// p.120, 16번 문제
	int price = 50, end_price = 250, bet = 0, win = 0;

	cout << "초기 금액 $" << price << endl;
	cout << "목표 금액 $" << end_price << endl;

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
	cout << "1000 중의 " << win << "번 승리" << endl;
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << win / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << bet / 1000.0 << endl;

	return 0;
}