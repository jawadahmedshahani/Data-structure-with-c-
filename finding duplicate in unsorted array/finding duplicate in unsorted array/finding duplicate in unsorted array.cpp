// finding duplicate in unsorted array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int array[10] = { 2,6,2,1,2,6,8,6,1,6 };
	int i, j = 0;
	int counter = 0;
	for (i = 0; i < 10; i++)
	{
		if (array[i] != -1)
		{
			counter = 1;
			for (j = i + 1; j < 10; j++)
			{
				if (array[i] == array[j])
				{
					counter++;
					array[j] = -1;
					
				}
			
			}


			if (counter > 1)
			{
				std::cout << array[i] << " is duplicate element" << "\n";
				std::cout << array[i] << " is " << counter << " times repeat in array" << "\n";
			}
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
