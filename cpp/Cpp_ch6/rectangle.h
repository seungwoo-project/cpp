#pragma once
#include <iostream>
class rectangle
{
	private:    //�����̺��� ���� ���� �Ұ�
		int width;
		int height;
		std::string* color;
	public:
		rectangle(int w, int h, std::string str)
			:width{ w }, height{ h }
		{
			color = new std::string;		//���� �Ҵ�
			*color = str;
		}
		~rectangle()
		{
			delete color;
			std::cout << "�Ҹ���" << std::endl;
		}

		int calArea();
		void print();

};

