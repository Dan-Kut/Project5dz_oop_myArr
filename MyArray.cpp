#include "MyArray.h"
#include <iostream>
using namespace std;

MyArray::MyArray()
{
	this->size = 0;
	this->arr = nullptr;
}

MyArray::MyArray(unsigned int size)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size] {};
	}
	else
	{

		this->arr = nullptr;
	}

}

MyArray::MyArray(unsigned int size, int* arr)
{
	this->size = size;
	if (size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i < this->size; i++)
		{
			this->arr[i] = arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}

}

void MyArray::printArray() const
{
	if (this->size > 0)
	{
		for (int i = 0; i < this->size; i++)
		{
			cout << this->arr[i] << ' ';
		}
		cout << endl;
	}
	else
	{
		cout << "Empty Array(\n";
	}
}

void MyArray::setSize(unsigned int size)
{
	this->size = size;
}



unsigned int MyArray::getSize() const
{
	return this->size;
}

void MyArray::change_size_arr(unsigned int size)
{
	this->size = size;
	int* arr2 = new int[size];
	for (int i = 0; i <= size; i++)
	{
		arr2[i] = this->arr[i];
	}
	this->arr = arr2;
}

void MyArray::sort_arr()
{
	int num = 0;
	for (int i = this->size; i != 0 ; i--)
	{
		for (int j = 0; j < i - 1 ; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				num = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = num;
			}
		}
	}
}

int MyArray::max_value()
{
	int num = arr[0];
	for (int i = 1; i < this->size; i++)
	{
		if (arr[i] > num)
		{
			num = arr[i];
		}
	}
	return num;
}

int MyArray::min_value()
{
	int num = arr[0];
	for (int i = 1; i < this->size; i++)
	{
		if (arr[i] < num)
		{
			num = arr[i];
		}
	}
	return num;
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	if (this->size > 0)
	{
		this->arr = new int[this->size];
		for (int i = 0; i <= this->size; i++)
		{
			this->arr[i] = obj.arr[i];
		}
	}
	else
	{
		this->arr = nullptr;
	}
}

MyArray::~MyArray()
{
	if (this->arr != nullptr)
	{
		delete[] arr;
	}
}
