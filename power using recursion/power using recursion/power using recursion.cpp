// power using recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else 
        return pow(m, n - 1)* m;
}
int pow1(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pow(m * m, n / 2);

    else
        return m * pow(m * m, (n - 1) / 2);
}
int pow2(int m, int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        s = s * m;
    }
    return s;
}
int main()
{
    int x = 2;
    int y = 9;
    int r = pow(x, y);
    std::cout<<"the result of power is =" << r << "\n";
    std::cout << "Hello World!\n";
    r = pow1(x, y);
    std::cout << "the result of power using less calls values =" << r << "\n";
    r = pow2(x, y);
    std::cout << "the result of power using loop =" << r << "\n";
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
