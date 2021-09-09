// template class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// another way to write class in  c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// practice c++ class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


//int fun(struct rectangle* p);
template <class T>
class rectangle

{
private:
    T length;
    T breadth;
public:
    rectangle()
    {
        length = 0;
        breadth = 0;
    }

    rectangle(T l, T b);


    T area();

    void setlength  (T lent); // T lent

    T getlentgth();

    void setbreadth (T breadt);  //T breadt)

   T getbreadth();

   // ~rectangle();

};  // class end
template<class T>
rectangle<T>::rectangle(T l, T b)
{
   this-> length = l;
   this-> breadth = b;
}
template<class T>
T rectangle<T>::area()
{
    return length * breadth;
}
template<class T>
void rectangle<T>::setlength(T lent)
{
    length = lent;
}
template<class T>
T rectangle<T>::getlentgth()
{
    return length;
}
template<class T>
void rectangle<T>::setbreadth(T breadt)
{
    breadth = breadt;
}
template<class T>
T rectangle<T>::getbreadth()
{
    return breadth;
}
//T rectangle<T>::~rectangle()   // destructor for removing dynamic memory .....
//{
  //  std::cout << "destructor is" << "\n";
//}
int main()
{
    rectangle<int> r(2, 2);
    std::cout << "area is=" << r.area() << "\n";
    r.setlength(235);
    std::cout << "new length is" << r.getlentgth()<<"\n";
    r.setbreadth(255);
    std::cout << "new breadth is" << r.getbreadth()<<"\n";
    std::cout << "area after changin length and breadth is=" << r.area() << "\n";


    rectangle<float> r1(2.4, 2.6);
    std::cout << "area is=" << r1.area() << "\n";
    r1.setlength(23.5);
    std::cout << "new length is" << r1.getlentgth() << "\n";
    r1.setbreadth(25.5);
    std::cout << "new breadth is" << r1.getbreadth() << "\n";
    std::cout << "area after changin length and breadth is=" << r1.area() << "\n";







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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
