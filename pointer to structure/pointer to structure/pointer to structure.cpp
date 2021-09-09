// pointer to structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct rectangle
{
    int length;
    int breadth;

};
int main()
{  // static memory alocated .....
  /*  rectangle r = {23,44};
    std::cout << r.length << "\n" << r.breadth << "\n";
    rectangle* p;
    p = &r;
    p->breadth = 10;
    p->length = 20;
    std::cout << p->length << "\n" <<p->breadth<< "\n";
    std::cout << "Hello World!\n";*/
    // dynamic means memory allocated in heap....
    rectangle* p;
    p = new rectangle;
   // p = (struct rectangle*)malloc(sizeof(struct rectangle));  for c language malloc function....
    p->length = 20;
    p->breadth = 30;
    std::cout << p->length << "\n" << p->breadth << "\n";
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
