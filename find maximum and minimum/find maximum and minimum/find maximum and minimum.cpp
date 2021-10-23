// find maximum and minimum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	
	int array[10];// = { 2,4,6,7,11,13,15,18,19,20 };
		int i;
		
		for (i = 0; i < 10; i++)
		{
			std::cout << "enter" << i + 1 << "element" << "\n";
			std::cin >> array[i];
		}
		int max = array[0];
		int min = array[0];

		for (i = 1; i < 10; i++)
		{
        	if (min > array[i])
			{
				min = array[i];
			}
			else if (max < array[i])
				max = array[i];
			}

		std::cout << "maximum is = "  << max<<"\n;" << "minimum is = " << min;
	
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
