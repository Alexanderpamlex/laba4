#include <iostream>
using namespace std;

void push_back(int *&arr,int &size,int value) // добовляет
{
	int *newarr = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newarr[i] = arr[i];
	}

	newarr[size] = value;
	size++;
	delete[] arr;
	arr = newarr;
	

}
void pop_back(int*& arr, int& size) // удаляет 
{
	size--;
	int* newarr = new int[size];
	for (int i = 0; i < size; i++)
	{
		newarr[i] = arr[i];
	}

	
	
	delete[] arr;
	arr = newarr;
	

}
int main()
{
	setlocale(LC_ALL, "rus");
	int val = 33; // число которое будет стоять в конце массива, когда он увеличится
	int size = 5;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i]=rand()%11;
	}
	cout << "Стандартный массив" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] <<"\t";
	}
	cout << endl;
	push_back(arr,size,val);
	cout << "После увеличения" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	pop_back(arr,size);
	cout << "После уменьшения" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	pop_back(arr, size);
	cout << "Ещё одно уменьшение" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}









	delete[] arr;
}