// CONVERT C PROGRAMM IN C++ CLASS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
//using namespace std;
class array
{
private:
    int *A;
    int length;
    int size;
public:
    array()
    {
        size = 10;
        A = new int[size];
        length = 0;
    }
    array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }
    ~array()
    {
        delete[]A;
    }
    void display();
    void insert(int index, int x);
    int delt(int index);
};
void array:: display()
{
    int i;
    for (i = 0; i < length; i++)
        std::cout << A[i] << " ";
    std::cout <<  "\n";

}
void array ::insert(int index, int x)
{
    if (index >= 0 && index < length)
        for (int i = length - 1; i >= index; i--)
            A[i + 1] = A[i];
           A[index] = x;
           length++;
}
int array::delt(int index)
{
    int x = 0;
      
     if (index >= 0 && index < length)
     {   x = A[index];
    for (int i = index; i < length - 1; i++)
        A[i] = A[i + 1];
    length--; }
    return x;
}

int main()
{
    array arr(10); // here 10 is constructor call to array constructor size 10....
    arr.insert(0, 15);
    arr.insert(1, 23);
    arr.insert(2, 35);
    std::cout << "element inserted are " << "\n";
    arr.display();
    std::cout<<"deleted element is = " << arr.delt(0) << "\n";
    std::cout << "new array is " << "\n";
    arr.display();
    std::cout << "Hello World!\n";
}   */
#include <iostream>
//using namespace std;
template <class T>
class array
{
private:
    T *A;
    int length;
    int size;
public:
    array()
    {
        size = 10;
        A = new T[size];
        length = 0;
    }
    array(int sz)
    {
        size = sz;
        length = 0;
        A = new T[size];
    }
    ~array()
    {
        delete[]A;
    }
    void display();
    void insert(int index, T x);
    T delt(int index);
};
template <class T>
void array<T>::display()
{
    int i;
    for (i = 0; i < length; i++)
        std::cout << A[i] << " ";
    std::cout << "\n";

}
template <class T>
void array<T> ::insert(int index, T x)
{
    if (index >= 0 && index < length)
        for (int i = length - 1; i >= index; i--)
            A[i + 1] = A[i];
    A[index] = x;
    length++;
}
template <class T>
T array<T>::delt(int index)
{
    T x = 0;

    if (index >= 0 && index < length)
    {
        x = A[index];
        for (int i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
    }
    return x;
}

int main()
{
    array <char> arr(10); // here 10 is constructor call to array constructor size 10....
    arr.insert(0, 'a');
    arr.insert(1, 'b');
    arr.insert(2, 'c');
    std::cout << "element inserted are " << "\n";
    arr.display();
    std::cout << "deleted element is = " << arr.delt(0) << "\n";
    std::cout << "new array is " << "\n";
    arr.display();
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
