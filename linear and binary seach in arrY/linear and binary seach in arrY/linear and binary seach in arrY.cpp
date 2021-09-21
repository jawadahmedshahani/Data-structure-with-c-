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


int linearsearch(struct array ar, int num) // for simple linear search
{
    
    int i;
        
    for (i = 0; i < ar.length; i++)
    {
        if (num == ar.A[i])
        {
            return i;
        }
    }
        //    x = ar->A[index]; here can be written as abdulbari...
            //  ar->A[ar->length++]; both this and lower do same working...
        return -1;
    }
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int transposition(struct array *ar, int num) // for transposition and swaping
{

    int i;

    for (i = 0; i < ar->length; i++)
    {
        if (num == ar->A[i])
        {
            swap(&ar->A[i], &ar->A[i - 1]);
            return i;
        }

    }
    //    x = ar->A[index]; here can be written as abdulbari...
        //  ar->A[ar->length++]; both this and lower do same working...
    return -1;
}
int moveheader(struct array* ar, int num) // for transposition and swaping
{

    int i;

    for (i = 0; i < ar->length; i++)
    {
        if (num == ar->A[i])
        {
            swap(&ar->A[i], &ar->A[0]);
            return i;
        }

    }
    //    x = ar->A[index]; here can be written as abdulbari...
        //  ar->A[ar->length++]; both this and lower do same working...
    return -1;
}
int main()
{
    struct array arr = { {23,24,25,26,27},5,20 };
  // 
  //  std::cout << "searchhing index of element is" << linearsearch(arr, 25) << "\n";
 //   std::cout << "searchhing index of element in transposition = " << transposition(&arr, 25) << "\n";
   // std::cout << "now new array is" << "\n";
   //display(arr);
   std::cout << "Hello World!\n";
   std::cout << "searchhing index of element in moveheader =" << moveheader(&arr, 27) << "\n";
   std::cout << "now new array is" << "\n";
   display(arr);
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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
