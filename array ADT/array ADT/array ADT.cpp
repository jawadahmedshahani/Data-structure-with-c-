// array ADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <istream>
/*struct array for creatin in heap ...
{
    int* A;
    int length;
    int size;
};
void display(struct array arr)
{
    int i;
    std::cout << "elements aRE" << "\n";
    for (i = 0; i < arr.length; i++)
    {
        std::cout << arr.A[i] << "\n";
    }
}
int main()
{
    array arr;
    std::cout << "enter the array size<<\n";
    std::cin >>& arr.size; but it is thrown exception

    arr.A = new int();
    arr.length = 0;
    std::cout << "enter the number for numbers<<\n";
    int n;
    std::cin >> n;
    std::cout << "enter elements " << "\n";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr.A[i];

    }
    arr.length = n;
    display(arr);
    std::cout << "Hello World!\n";
}*/
struct array
{
    int A[10];
    int length;
    int size;
};
void display(struct array arr)
{
    int i;
    std::cout << "elements aRE" << "\n";
    for (i = 0; i < arr.length; i++)
    {
        std::cout << arr.A[i] << "\n";
    }
}
int main()
{
   struct array arr = { {23,24,25,26,27},5,10 };

    display(arr);
    std::cout << "Hello World!\n";
    return 0;
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
