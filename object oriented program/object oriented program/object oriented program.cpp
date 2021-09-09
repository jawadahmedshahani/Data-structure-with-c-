// object oriented program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// structure type style in c++ also........
#include <iostream>



struct rectangle
{
    int length;
    int breadth;

    void changelength(int lent)
    {


        length = lent;

    }
    void initialize( int l, int b)
    {
        length = l;
        breadth = b;
        std::cout<<"length is now=" << length << "\n"<<"breadth is now" << breadth << "\n";
    }
    int area( int len, int brd)
    {
        return length * breadth;
    }
};
int main()
{
    rectangle r = { 10,15 };
    int l; int b;
    std::cout << "enter the length and breadth" << "\n";
    std::cin >> l >> b;


   r. initialize( l, b);



    // std::cout << c << "\n";
    std::cout << "Hello World!\n";
    std::cout << "area is " << r.area(l,b) << "\n";
    r.changelength( l);

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
