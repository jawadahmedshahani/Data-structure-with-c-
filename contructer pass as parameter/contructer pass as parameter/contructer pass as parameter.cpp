// contructer pass as parameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
/*int fun(struct rectangle r1);

struct rectangle
{
    int length;
    int breadth;
};
int fun(struct rectangle r1)
{
    int c = r1.length * r1.breadth;
    return c;
}
int main()
{
    rectangle r = { 23,45 };
    int c = fun(r);
    std::cout<<c;
    std::cout << "Hello World!\n";
}*/
// structure pass as parameter by reference......
/*int fun(struct rectangle& r1);

struct rectangle
{
    int length;
    int breadth;
};
int fun(struct rectangle &r1)
{
    int c;
    r1.length = 12;
    r1.breadth=12;
    c= r1.length* r1.breadth ;
    return c;
}
int main()
{
    rectangle r = { 23,45 };
    int c = fun(r);
    std::cout << c<<"\n";
    std::cout << "Hello World!\n";
}  */
// structure pass as parameter by address......
/*int fun(struct rectangle* p);

struct rectangle
{
    int length;
    int breadth;
};
int fun(struct rectangle *p)
{
    int c;
    
    p->breadth = 12;
   
    c = p->length * p->breadth;
    return c;
}
int main()
{
    rectangle r = { 23,45 };
    int c = fun(&r);
    std::cout << c << "\n";
    std::cout << "Hello World!\n";
}*/
/*int fun(struct rectangle* p,int);

struct rectangle
{
    int length;
    int breadth;
};
int fun(struct rectangle* p ,int l)
{ 
    p->length = l;
    int c;

    p->breadth = 12;

    c = p->length * p->breadth;
    return c;
}
int main()
{
    rectangle r = { 23,45 };
    int c = fun(&r,2);
    std::cout << c << "\n";
    std::cout << "Hello World!\n";
}*/
//void fun(struct rectangle p);

/*struct rectangle
{
    int length[5];
    int breadth;
};
void fun(struct rectangle p)
{
   
    p.length[0] = 32;
    p.length[3] = 78;
    for (int a = 0; a < 5; a++)
    {
        std::cout << p.length[a] << "\n";
    }
   
}
int main()
{
    rectangle r = { {23,45,23,45,34},5 };
     fun(r);
     for (int a = 0; a < 5; a++)
     {
         std::cout << r.length[a] << "\n";
    }
    std::cout << "Hello World!\n";
}*/
//int fun(struct rectangle* p);

struct rectangle
{
    int length;
    int breadth;
};
void changelength(struct rectangle *p , int lent)
{
    

    p->length = lent;

}
void initialize(struct rectangle *r1,int l, int b)
{
    r1->length = l;
    r1->breadth = b;
}
int area(struct rectangle *r2, int len, int brd)
{
    return r2->length * r2->breadth;
}
int main()
{
    rectangle r = { 10,15 };
    int l; int b;
    std::cout << "enter the length and breadth" << "\n";
    std::cin >> l >> b;


    initialize(&r,l, b);
    std::cout << "area is " << area(&r,l, b)<<"\n";
    changelength(&r, l);
    
    


   // std::cout << c << "\n";
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
