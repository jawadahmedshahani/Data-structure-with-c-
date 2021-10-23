// check identity matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
	// Matrix multiplicaion.cpp : This file contains the 'main' function. Program execution begins and ends there.
 //

#include <iostream>                             // start of program

	int main()                                 
	{
		int array1[3][3];                     // declare 2D array

		int i, j;
		bool check = true;
		std::cout << "enter element of matrix " << "\n";
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{   
				std::cout << "matrix ["<<i<<","<<j<<"]=";
				std::cin >> array1[i][j];                     // initiliazing from user
			
			}
		
		}
	
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (i == j && array1[i][j] != 1)
				{
					check = false;
					break;
				}

				else if(i != j && array1[i][j] != 0)
				{
					check = false;
				}
			}
		
		}
		if(check==true)                     // for matrix is identity
		{

		std::cout << " matrix is identity" << "\n";
		std::cout << " so that is given below" << "\n";
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				std::cout << array1[i][j] << " ";
			}
			std::cout << "\n";
		}

	    }
		else                         // matrix is not identity
		{

			std::cout << " matrix is not identity" << "\n";
			std::cout << " so that is given below" << "\n";
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					std::cout << array1[i][j] << " ";
				}
				std::cout << "\n";
			}

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
