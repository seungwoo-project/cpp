#include <iostream>
#include <array>
#include <vector>

using namespace std;
void arr_print(int(&arr)[5])
{
	for(int n : arr)
		cout << n << " ";
	cout << endl;
}
void array_print(array<int,5>&arr1)
{
	for (int n : arr1)
		cout << n << " ";
	cout << endl;
}
void vector_print(vector<int>& vec1)
{
	for (int n : vec1)
		cout << n << " ";
	cout << endl;
}
int main()
{
	int arr[]{1,3,5,7,9};
	array<int, 5> arr1{1,3,5,7,9};
	vector<int>vec1{1,3,5,7,9};

	arr_print(arr);
	array_print(arr1);
	vector_print(vec1);

	return 0;
}