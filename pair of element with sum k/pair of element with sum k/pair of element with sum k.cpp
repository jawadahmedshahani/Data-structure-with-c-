// finding duplicate in unsorted array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
/* {
	int array[10] = { 2,6,4,7,1,3,8,5,9,10 };
	int i, j = 0;

	int number;
	std::cout << "enter the number" << "\n";
	std::cin >> number;
	std::cout << "\n";
	int x = 0;
	for (i = 0; i < 10; i++)
	{
	        	for (j = i + 1; j < 10; j++)
			{
				if (array[i] + array[j] == number)
				{
				   std::cout << array[i] << " + " << array[j] << " is = " << number << "\n";
					x++;
				}
				}
  }
	if (x==0)
		std::cout << "not found";
}*/ 
//   sorted array procedeure .......

{
	int array[10] = { 2,4,6,7,11,13,15,18,19,20 };
	int i = 0;
	int j = 9;

	int number;
	std::cout << "enter the number" << "\n";
	std::cin >> number;
	std::cout << "\n";
	int x = 0;
	while (i < j)
	{


		if (array[i] + array[j] == number)
		{
			std::cout << array[i] << " + " << array[j] << " is = " << number << "\n";
			i++;
			j--;
			x++;
		}
		else if (array[i] + array[j] < number)
			i++;
		else
			j--;
	}
  
	if (x==0)
		std::cout << "not found";
}

