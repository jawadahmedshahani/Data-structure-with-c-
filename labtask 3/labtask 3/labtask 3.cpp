// labtask 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
void initilizearray(int array[], int n);
int LinearSearch(int array[], int n);
int BinarySearch(int array[], int n);
void BubbleSort(int array[], int n);
void InsertionSort(int array[], int n);
void traversing(int array[], int n);
void selectionsort(int array[], int n);
void swap(int *x, int *y);
int main()
{
	int opt;
	int array[5];

	int n = 5;
	do {

		cout << "press 1 to initilize array" << endl;
		cout << "press 2 to perform linear search" << endl;
		cout << "press 3 to perform Binary search" << endl;
		cout << "press 4 to perform selection sort" << endl;
		cout << "press 5 to perform bubble sort" << endl;
		cout << "press 6 to perform Insertion sort" << endl;
		cout << "press 0 to  Terminate" << endl;
		cin >> opt;
		/*if (opt == 1)
		{
		   // linear s
		} // opt 1 */
		switch (opt)
		{
		case 1:
			initilizearray(array, n);
		
			break;
		case 2:
			LinearSearch(array, n);
			
			break;
		case 3:
			BinarySearch(array, n);
		
			break;
		case 4:
			selectionsort(array, n);
		
			break;
		case 5:
			BubbleSort(array, n);
		
			break;
		case 6:
			InsertionSort(array, n);
			break;
		case 0:

			cout << "process trerminated" << endl;
			exit(-1);
		} // switch
	} while (true);
	return 0;
}
void initilizearray(int array[], int n)
{
	cout << "enter array elements" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << " array [" << i << "] =";
		cin >> array[i];
	}
}
int LinearSearch(int array[], int n)
{
	int item;
	cout << " provide the item you want serach" << endl;
	cin >> item;
	int loc = -1;
	for (int i = 0; i < n; i++)
	{
		if (item == array[i])
		{
			loc = i;
			break;
		}
	}
	if (loc == -1)
	{
		cout << "entire array has been checked but value not found" << endl;
	}
	else
		cout << " value  found at index" << loc << endl;

	return loc;
}
int BinarySearch(int array[], int n)
{
	int beg = 0;
	int loc = 0;
	int end = n - 1;
	int mid = (beg + end) / 2;
	int item;
	cout << " provide the item you want serach" << endl;
	cin >> item;
	while (beg <= end && array[mid] != item)
	{
		if (item < array[mid])
			end = mid - 1;
		else
			beg = mid + 1;
		mid = (beg + end) / 2;
	}
	if (beg > end)
	{
		cout << "entire array has been checked but value not found" << endl;
		loc = -1;
	}
	else
	{

		loc = mid;
		cout << " value  found at index" << loc << endl;
	}
	return loc;
}
void BubbleSort(int array[], int n) {
	int marker, j;
	int temp;
	for (marker = n - 1; marker > 0; marker--)
	{
		bool flag = false;
		for (j = 0; j < marker; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = true;
			}

		}
		if (flag == false)
			break;
	}
	cout << "now Bubble sort ao array has been done and new array form is below" << endl;
	traversing(array, n);
}
void traversing(int array[], int n)
{
	for (int i = 0; i < n; i++)
		cout << array[i] << endl;

}
void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
void selectionsort(int array[], int n)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++)
	{
		min = array[i];
		int loc = i;
		for (j = i + 1; j < n; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				loc = j;
			}
		}
	/*	int temp = array[i];
		array[i] = array[loc];
		array[loc] = temp;*/
		swap(&array[i], &array[loc]);
	}
	cout << "the selection sort array is being done and below " << endl;
	traversing(array, n);

}
void InsertionSort(int array[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = array[i];
		j = i - 1;
		while (j >= 0 && array[j]>key)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
	cout << "now insertion sort array is done" << endl;
	traversing(array, n);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
