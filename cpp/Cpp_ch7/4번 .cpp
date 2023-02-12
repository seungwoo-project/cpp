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
	cout << "에스프레소 2000원, 아메리카노 2500원, 카푸치노 3000원" << endl;
	while (true)
	{
		cout << "주문: ";
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
		cout << "의 총 금액은 " << price << "입니다." << endl;
		cout << "오늘 매출은 " << sum << "입니다." << endl;
		text.clear();
		if (sum > 30000)
			break;
	}
	
	return 0;
}