// parameter passing throug by value address and reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// call by value........  cant not change actual parameters by changing formal....
/*void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;

    y = temp;
}
int main()
{
    int a = 29;
    int b = 30;
    swap(a, b);
    std::cout << a << "\n" << b << "\n";
    std::cout << "Hello World!\n";
}  */ 
//call by address.... changed the actual by formal bcz funtion accesss the variable of other by pointqe
/*void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;

    *y = temp;
}
int main()
{
    int a = 29;
    int b = 30;
    std::cout << a << "\n" << b << "\n";
    swap(&a, &b);
    std::cout << a << "\n" << b << "\n";
    std::cout << "Hello World!\n";
}*/
// call by reference ... chANGES the actual and formal ... becz here swqap is not an other function . it is also the part of main function.
/*void swap(int& x, int* y)
{
    int temp;
    temp = x;
    x = *y;

    *y = temp;
}
int main()
{
    int a = 29;
    int b = 30;
    std::cout << a << "\n" << b << "\n";
    swap(a, &b);
    std::cout << a << "\n" << b << "\n";
    std::cout << "Hello World!\n";
} */
/*void swap(int& x, int &y)
{
    int temp;
    temp = x;
    x = y;

    y = temp;
}
int main()
{
    int a = 29;
    int b = 30;
    std::cout << a << "\n" << b << "\n";
    swap(a, b);
    std::cout << a << "\n" << b << "\n";
    std::cout << "Hello World!\n";
} */
void swap(int& x, int y)
{
    int temp;
    temp = x;
    x = y;

    y = temp;
}
int main()
{
    int a = 29;
    int b = 30;
    std::cout << a << "\n" << b << "\n";
    swap(a, b);
    std::cout << a << "\n" << b << "\n";
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
