#pragma once
#include <iostream>
class rectangle
{
	private:    //프라이빗은 직접 접근 불가
		int width;
		int height;
		std::string* color;
	public:
		rectangle(int w, int h, std::string str)
			:width{ w }, height{ h }
		{
			color = new std::string;		//동적 할당
			*color = str;
		}
		~rectangle()
		{
			delete color;
			std::cout << "소멸자" << std::endl;
		}

		int calArea();
		void print();

};

