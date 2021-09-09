// FUNCTION RETURN ARRAY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
/*void fun(int s[], int n)
{
    s[0] = 23;
    s[1] = 22;
   s[4] = 25;
    for (int x = 0; x < n; x++)
    {
        std::cout << s[x] << "\n";
    }
 

}

int main()
{ 
    int a[] = { 2,3,4,5,6 };
    int n = 5;
    for (int x : a)
    std::cout << x << "\n";
    std::cout << "Hello World!\n";
    fun(a,5);
    for (int x : a)
        std::cout << x << "\n";

}  */

int * fun (int size)
{
    int* p;
    p = new int[size];
   std:: cout << "enter values for array" << "\n";


    for (int x = 0; x < size; x++)
    {
        std::cout << x+1<<"value" << "\n";
        std::cin >> p[x];
       
    }
    return(p);


}

int main()
{
    int*a;
    int n=8;

   a= fun(n);
    for (int y=0;y<8;y++)
        std::cout << a[y] << "\n";

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
