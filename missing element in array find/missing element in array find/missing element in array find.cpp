// missing element in array find.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct array
{
	int a[12];
	int length;
	int size;
};
int missingelement(struct array arr)
{
	int i = 0, sum = 0, s = 0;
	int result;
	for (i = 0; i < arr.length; i++)
	{
		sum += arr.a[i];
	}
	s = (arr.length + 1) * ((arr.length + 1) + 1) / 2;
	result = s - sum;
	return result;
}
int missingelement2(struct array arr2 , int l)
{
	int diff = l - 0;
	int result = 0;
	
	for ( int i = 0; i < arr2.length; i++)
	{
		if (arr2.a[i]-i != diff)
		{
			result = diff + i;
			break;
		}

	}
	return result;
	
}
int main()
{
	
	//struct array arr1 = { {1,2,3,4,6,7,8,9,10},9,12 };
	//struct array arr2 = { {4,6,7,8,9,10},6,12 };
	// int a[10] = { 1,2,3,4,5,6,7,8,9,11 };
//	int i = 0, sum = 0, s = 0;
	//int n = 11;
	//for (i = 0; i < 10; i++)
	//{
		//sum += a[i];
	//}
	//s = n * (n + 1) / 2;
	//std::cout << "missing element is = " << s - sum;
	//std::cout << "misssing element is " << missingelement2(arr2,4);

	// find multiple missing element from array 
	int A[] = { 3,7,4,9,12,6,1,11,2,10 };
	int H[] = { 0,0,0,0,0,0,0,0,0,0,0,0 };
	int l = 1;
	int h = 12;
	int element = 10;
	for (int i = 0; i < element; i++)
		H[A[i]]++;
	for (int i = l; i <= h; i++)
		if (H[i] == 0)
			std::cout << i << "\n";
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
