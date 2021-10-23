// Matrix multiplicaion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int array1[2][3] = { {1,1,1},{2,2,2} };
	int array2[3][2] = { {3,3},{4,4},{5,5} };
	int array3[2][2] = { {0,0},{0,0} };
	int i, j, k;
	std::cout << "elements of ist matrix" << "\n";
	for ( i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			std::cout << array1[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "elements of 2nd matrix" << "\n";
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			std::cout << array2[i][j] << " ";
		}
		std::cout << "\n";
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			array3[i][j] = 0;
			for (k = 0; k < 3; k++)
			{
				array3[i][j] += array1[i][k] * array2[k][j];
		    }
		
		}
		std::cout << "\n";
	}
	std::cout << "elements of resultant matrix" << "\n";
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			std::cout << array3[i][j] << " ";
		}
		std::cout << "\n";
	}
	
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
