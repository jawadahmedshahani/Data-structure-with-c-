// incresin array size.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
  /*  int* p;
    int a[5] = { 23,34,5,6,7 };
    p = a;
    for (int i = 0; i < 5; i++)
    {
        std::cout << p[i] << "\n";
    }
    */
    int* p, * q;
    int i;
    p = new int[5];
    p[0] = 32;
    p[2] = 35;
    q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i]; // pointing p to q with larger size...
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << q[i] << "\n";
    }
    std::cout << "with new function" << "\n";
    free(p);
    p = q; // pointing p array to q and delt p array and new is p having q size ,,,
    q = NULL;
    for (int i = 0; i < 5; i++)
    {
        std::cout << p[i] << "\n";
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
