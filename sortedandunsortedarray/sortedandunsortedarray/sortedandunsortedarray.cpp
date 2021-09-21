// sortedandunsortedarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// setgestmaxminarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
struct array
{
    int a[20];
    int length;
    int size;

};
void sort(struct array *arr, int x)
{
    int i = arr->length - 1;
    
    if (arr->length == arr->size)
        return;
    while (i >= 0 && arr->a[i] > x)
    {
        arr->a[i + 1] = arr->a[i];
        i--;
    }
    arr->a[i + 1] = x;
    arr->length++;
}
int issorted(struct array arr)

{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.a[i] > arr.a[i + 1])
            return 0;
    }
    return 1;
}
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void rearrange(struct array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->a[i] < 0)i++;
        while (arr->a[j] > 0) j--;
        if (i < j)
            swap(&arr->a[i], &arr->a[j]);
    }
}

void display(struct array ar)
{
    int i;
    for (i = 0; i < ar.length; i++)
        std::cout << ar.a[i] << "\n";
}




int main()
{
 //   struct array arr = { {23,25,36,48,56,78,89},7,20 };
  //  sort(&arr, 30); 
  //  std::cout << issorted(arr) << "\n"; // array is srted or not.....
    struct array arr = { {-23,25,-36,48,-56,78,-89},7,20 };
    rearrange(&arr);
     display(arr);


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
