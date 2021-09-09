// taylor series using honor rule.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// taylor series is 
// e
#include <iostream>
double e(int m, int n)
{
    
  static  double r=1;
    if (n == 0)
        return r;
    else
    {
        
        r = 1 + m * r / n;
        return e(m, n - 1);
    }

}
double e1(int m, int n)
{

      double r = 1;
      int i;
      double numenator = 1;
      double denu = 1;
    for (int i=1;i<=n; i++)
    {
        numenator *= numenator;
        denu *= i;
        r += numenator / denu;

    }
   
    return r;
      
        
    

}
int main()
{
    int x = 1;
    int y = 10;
    double r = e(x, y);
    std::cout << "the value of r is =" << r << "\n";
    std::cout << "Hello World!\n";
     r = e1(x, y);
    std::cout << "the value of r using for loop is =" << r << "\n";
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
