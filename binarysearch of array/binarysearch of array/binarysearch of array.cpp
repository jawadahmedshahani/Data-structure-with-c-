// binarysearch of array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// linear and binary seach in arrY.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// delatition of element in array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//y appendand insert.cpp : This file contains the 'main' function.Program execution begins and ends there.
//

#include <iostream>

struct array
{
    int A[20];
    int length;
    int size;
};
void display(struct array arr)
{
    int i;
    std::cout << "elements aRE" << "\n";
    for (i = 0; i < arr.length; i++)
    {
        std::cout << arr.A[i] << "\n";
    }
}


int binarysearch(struct array ar, int key) // for binary search using loop as itterative 
{

    int  l=0, h=ar.length-1, mid;
    
    while(l<=h)
    {
        mid = (l + ar.length) / 2;
        if (key == ar.A[mid])
            return mid;
        else if (key < ar.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    //    x = ar->A[index]; here can be written as abdulbari...
        //  ar->A[ar->length++]; both this and lower do same working...
    return -1;
}



int Rbinarysearch(struct array *ar, int l,int h,int key) // for binary search using recursion....
{

    int mid;
    if (l <= h)
    {
        mid = (l + h )/ 2;
        if (key == ar->A[mid])
            return mid;
        else if (key < ar->A[mid])
            return Rbinarysearch(ar, l, mid-1, key);
        else if (key > ar->A[mid])
            return Rbinarysearch(ar, mid+1, h, key);
    }

    return -1;
}
int main()
{
    struct array arr = { {23,24,25,26,27},5,20 };
    std::cout << "searchhing index of element in binarysearch in recursion =" << Rbinarysearch(&arr, 0, arr.length,27 ) << "\n";
 //   std::cout << "searchhing index of element in binarysearch =" << binarysearch(arr, 29) << "\n";
  //  std::cout << "now new array is" << "\n";
  //  display(arr);
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
