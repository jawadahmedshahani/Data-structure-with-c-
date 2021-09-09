// another way to write class in  c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// practice c++ class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//int fun(struct rectangle* p);

class rectangle
{
private:
    int length;
    int breadth;
public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }
   
    rectangle(int l, int b);


    int area();

    void setlength(int lent);

    int getlentgth();

    void setbreadth(int breadt);

    int getbreadth();

    ~rectangle();

};  // class end
rectangle::rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int rectangle::area()
{
    return length * breadth;
}
 void rectangle::setlength(int lent)   
{
    length = lent;
}
int rectangle:: getlentgth()
{
    return length;
}
void rectangle::setbreadth(int breadt)
{
    breadth = breadt;
}
int rectangle:: getbreadth()
{
    return breadth;
}
rectangle::~rectangle()   // destructor for removing dynamic memory .....
{
    std::cout << "destructor is" << "\n";
}
int main()
{
    rectangle r(20, 20);
    std::cout << "area is=" << r.area() << "\n";
    r.setlength(20);
    std::cout << "new length is" << r.getlentgth();
    r.setbreadth(25);
    std::cout << "new breadth is" << r.getbreadth();
    std::cout << "area after changin length and breadth is=" << r.area() << "\n";








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
