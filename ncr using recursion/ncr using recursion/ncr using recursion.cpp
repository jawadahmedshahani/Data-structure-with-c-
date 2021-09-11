// ncr using recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}
int ncr(int n, int r)
{
    int num, denum;
    num = fact(n);
    denum = fact(r) * fact(n - r);
    return num / denum;
}

int main()
{  
    int x = 4;
   
    std::cout << "the value of ncr is" << ncr(4, 2)<<"\n";
    std::cout << "Hello World!\n";
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
