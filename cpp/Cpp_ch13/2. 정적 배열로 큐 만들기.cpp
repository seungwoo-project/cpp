#include <iostream>
using namespace std;

template<typename T, int N>
class Queue
{
private:
	size_t size;
	T items[N]; //���� �迭
public:
	Queue() :size{ 0 } {}
	~Queue()
	{

	}
	void push(T item)
	{
		if (size < N)
			items[size++] = item;
		else
			throw "overflow";

	}

	void pop()
	{
		if (size == 0)
			throw "underflow";
		for (int i = 1; i < size; i++) {
			items[i - 1] = items[i];
		}
		size--;

	}

	T top()
	{
		if (size == 0)
			throw "underflow";
		return items[size - 1];
	}

	void print()
	{
		if (size == 0)
			throw "No item";
		for (int i = 0; i < size; i++)
			cout << items[i] << " ";
		cout << endl;
	}
};


int main()
{
	Queue<int, 3> q0;
	q0.push(1);
	q0.push(2);
	q0.push(4);
	// overflow ���� �߻� ���
	try {
		q0.push(5);
	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	// underflow ���� �߻� ���
	try {
		q0.pop();
		q0.pop();
		q0.pop();
		q0.pop();

	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	try {
		q0.top();

	}
	catch (const char* e)
	{
		cout << e << endl;
	}
	// No data ���� �߻� ���
	try {
		q0.print();
	}
	catch (const char* e)
	{
		cout << e << endl;
	}

}