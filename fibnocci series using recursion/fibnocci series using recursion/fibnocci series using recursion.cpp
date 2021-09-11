// fibnocci series using recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int fib(int n)  // itterative means using loop for recursion
{
    int t0 = 0, t1 = 1, s=0 , i;
    if (n <= 1)
        return n;
    else {
        for (i = 2; i <= n; i++)
        {
            s = t0 + t1;
            t0 = t1;
            t1 = s;
        }
        return s;
    }
  
}
int fibr(int n) // recursion.......
{
    if (n <= 1)
        return n;
    else
        return fibr(n - 2) + fibr(n - 1);
}

int  f[15];  // for memoization ..means for less calls using recusrsion
int fibm(int n)
{
    if (n <=1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] = fibm(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] = fibm(n - 1);
        }
        return f[n - 2] + f[n - 1];
    }
}
int main()
{  
    int i;
    for (i = 0; i <= 15; i++)
        f[i] = -1;
    std::cout << "the result for fib series using loop is " << fib(7) << "\n";
    std::cout << "Hello World!\n";
    std::cout << "the result for fib series using recursive calls is " << fibr(7) << "\n";
    std::cout << "the result for fib series using memoization is " << fibm(13) << "\n";
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
