// setgestmaxminarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct array
{
    int a[20];
    int length; 
    int size;

};
int get(struct array ar ,int index)
{
    if (index >= 0 && index < ar.length)
        return ar.a[index];
}
int max(struct array ar)
{
    int i;
    int max = ar.a[0];
    for (i = 1; i < ar.length; i++)
        if (ar.a[i] > max)
            max = ar.a[i];
    return max;
    
}
int min(struct array ar)
{
    int i;
    int min = ar.a[0];
    for (i = 1; i < ar.length; i++)
        if (ar.a[i]<min)
            min = ar.a[i];
    return min;

}
int sum(struct array ar)
{
    int i;
    int sum = 0;
    for (i = 1; i < ar.length; i++)
        sum += ar.a[i];
            
    return sum;

}
float avg(struct array ar)
{


    return (float)sum(ar) / ar.length;

}
void set(struct array *ar, int index, int x)
{
    if (index >= 0 && index < ar->length)
        ar->a[index] = x;
}
void display(struct array ar)
{
    int i;
    for (i = 0; i < ar.length; i++)
        std::cout << ar.a[i] << "\n";
}

int main()
{
    struct array arr = { {34,25,45,23,67,78,9},7,20 };
    std::cout<<"passing index value is = " << get(arr, 2); std::cout << "\n";
     set(&arr, 2,455);
     std::cout << "new array after setting replcing value  is = ";
     display(arr);
     std::cout << "maximum is =" << max(arr)<<"\n";
     std::cout << "minimum is =" << min(arr) << "\n";
     std::cout << "sum  is =" << sum(arr) << "\n";
     std::cout << "averge is =" << avg(arr) << "\n";


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
