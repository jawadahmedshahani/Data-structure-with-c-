// labtask 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

int main()
{
	int array1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int array2[3][3];
		int i, j;
	std::cout << "elements of ist matrix" << "\n";
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			std::cout << array1[i][j] << " ";
		}
		std::cout << "\n";
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			array2[j][i] = array1[i][j];

		}
		std::cout << "\n";
	}
	std::cout << "elements of resultant matrix" << "\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			std::cout << array2[i][j] << " ";
		}
		std::cout << "\n";
	}

}


