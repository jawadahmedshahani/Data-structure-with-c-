// lab task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
using namespace std;

void funtraversing(int array1[])             //  start of traversing as well sum of array elements function
{
	int sum = 0;
	std::cout << "elements ao 1d array are" << endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << array1[i] << endl;
		sum = sum + array1[i];
	}
	std::cout << "sum is =" << sum;
	std::cout << endl;
}                                            //    end of traversing as well sum of array elements function   

void linearsearch(int array1[],int check)   //  start of linear search function
{
	//int check = 25;
	bool test = false;



	for (int i = 0; i < 10; i++)
	{
		if (array1[i] == check)
		{
			test = true;
			std::cout << check << " is found and is at index = " << i << endl;
			break;
		}

	}
	if (test == false)
		std::cout << "element not found in linear search" << endl;

} //  end of linear search function



void binarysearch(int array1[],int check2)   //  start of binary search function
{
	int beg = 0;
	int end = 9;

	int location = 0;


	int mid = (beg + end) / 2;

	while (beg <= end && array1[mid] != check2)
	{
		if (check2 < array1[mid])
			end = mid- 1;
		else
			beg = mid + 1;

		mid = (beg + end) / 2;

	}

	if (beg > end)
	{
		location = -1;
		std::cout << "element not found in binary search" << endl;
	}
	else
	{
		location = mid;
		std::cout << check2 << " is found at location = " << location << endl;
	}
}                                          //  end of binary search function...


void identity(int matrix1[2][2])           // start of identity matrix checked function
{
	int i, j = 0;
	bool check = true;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (i == j && matrix1[i][j] != 1)
			{
				check = false;
				break;
			}
			else if (i != j && matrix1[i][j] != 0)
			{
				check = false;
				break;
			}
		}
	}
		if (check == true)
		{
			std::cout << "given below Matrix is identity" << endl;
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					std::cout << matrix1[i][j]<<" ";
				}
				std::cout << endl;
			}
		}
		else
		{
			std::cout << " given below Matrix is not identity" << endl;
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < 2; j++)
				{
					std::cout << matrix1[i][j]<<" ";
				}
				std::cout << endl;
			}
		}
	

}                                        //  end of identity matrix checked function


int main()
{
	int array1[10];                // one d array for lineaar and binary sesarch....
	int matrix[2][2];              // 2 D array for   checking the matrix is identity or not
	int i, j = 0;
	int item;                      // checcking item in linear and binary search
	cout << "enter elements in sorted form for 1 D array" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << "enter" << i + 1 << " element " << endl;
		cin >> array1[i];
	}
	cout << " enter the checking item " << endl;
	cin >> item;
	cout << endl;
	funtraversing(array1);          // traversing function with sum of number in given array
	linearsearch(array1,item);      // function call for the linear search in a given array
	binarysearch(array1,item);      // functon call for binary search ....
	
	cout << endl << "enter elements for matrix" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "matrix [" << i << "," << j << "]" << "  = ";
			cin>> matrix[i][j];
			
		}
	}
	std::cout << endl;
	identity(matrix);             // function call for checking matrix is identity or not..
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