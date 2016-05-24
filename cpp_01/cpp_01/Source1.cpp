/*
1) ������� ������ ����� ����� ��������� �������.
������ ������� ��������� ����� �� 50 �� 800. ������������ �������� C++ 11.
2) ������� � ������� ����� ����� �������, ����� ��� ���� � 8 �������� (���������� ����������),
������������ �� �����.
3) ������������� ����� � �������.
4) ������� ��������������� ������.

*/
#include <random>
#include <iostream>
#include <iomanip>  
using namespace std;

void PrintArray(int *PtrArray, int length)
{
	cout << "\n";

	int i = 1;
	for (; i < length; i++)
	{
		cout << setw(8) << right << *(PtrArray + i-1);
		if (i % 8 == 0) cout << "\n";
	}
	cout << "\n";
}

void InsertionSort(int *PtrArray, int length) // ���������� ���������
{
	int temp; // ��������� ���������� ��� �������� �������� �������� ������������ �������
	int	item; // ������ ����������� ��������
	for (int counter = 1; counter < length; counter++)
	{
		temp = PtrArray[counter]; // �������������� ��������� ���������� ������� ��������� �������� �������
		item = counter - 1; // ���������� ������ ����������� �������� �������
		while (item >= 0 && PtrArray[item] > temp) // ���� ������ �� ����� 0 � ���������� ������� ������� ������ �������� (�� �����������)
		{
			PtrArray[item + 1] = PtrArray[item]; // ������������ ��������� �������
			PtrArray[item] = temp;
			item--;
		}
	}
}


class ArrayClass
{
public:
	int* m_Data=nullptr;
	int m_Size=0;
	ArrayClass(int argu) :m_Size(argu)
	{
		m_Data = new int[m_Size];
	}
	~ArrayClass()
	{
		delete[] m_Data;
		m_Data = nullptr;
		m_Size = 0;
	}

};


int main()
{
	random_device rd;
	uniform_int_distribution<int> distribution(50, 800);
	int DynamicArraySize = distribution(rd);  // generates number in the range 50..800

	cout << "Size of the Dynamic Array: " << DynamicArraySize << endl;

	ArrayClass v_test(DynamicArraySize);
	
	int i = 0;
	for (; i < DynamicArraySize; i++)
	{
		v_test.m_Data[i]= distribution(rd);
	}

	PrintArray(v_test.m_Data, DynamicArraySize);

	InsertionSort(v_test.m_Data, DynamicArraySize);

	PrintArray(v_test.m_Data, DynamicArraySize);
	
	return 0;
}

