#pragma once

/*
������� ���� Array (��� �������������� ����� ��������� ����).
���� Array � �� ���� ���������� ������.
����� ������ ���� ���� ��������� �� �������� ���
������� �� ��������� ������� �������-�����.
���� ������� ��������� ����������� ����� ����������,
���������� ���� ������, �������� ����� ������, ���������
�����, ��������� �������� � ����������� ��������.
���� ������� ������ ���� ������������ (�����������
��������� �����������), ����������.*/

class MyArray
{
private:
	unsigned int size;
	int* arr;
public:
	MyArray(); //����������� �� �������������
	MyArray(unsigned int size);
	MyArray(unsigned int size, int* arr);

	void printArray() const;
	void setSize(unsigned int size);
	unsigned int getSize() const;
	void change_size_arr(unsigned int size);
	void sort_arr();
	int max_value();
	int min_value();

	MyArray(const MyArray& obj); //����������� ���������
	~MyArray(); //����������

};
