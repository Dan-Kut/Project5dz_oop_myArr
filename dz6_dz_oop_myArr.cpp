#include "MyArray.h"
#include "iostream"

using namespace std;

int main()
{
	unsigned int size = 5;
	int arr[5] = {5,2,0,3,1};
	MyArray arr2{ size,arr };
	arr2.printArray();
	arr2.sort_arr();
	arr2.printArray();
	cout << arr2.max_value();
	cout << arr2.min_value();


}