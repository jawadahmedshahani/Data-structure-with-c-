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
void display(struct array ar)
{
    int i;
    for (i = 0; i < ar.length; i++)
        std::cout << ar.a[i] << "\n";
}
struct array *merge(struct array *arr1, struct array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct array arr4;
    
  //  struct array *arr3 = (struct array*)malloc(sizeof(struct array));
      struct array arr3[20];

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
            arr3->a[k++] = arr1->a[i++];
        else
            arr3->a[k++] = arr2->a[j++];
    }
    for (; i < arr1->length; i++)
        arr3->a[k++] = arr1->a[i];
    for (; j < arr2->length; j++)
        arr3->a[k++] = arr2->a[j];
    arr3->length = arr1->length + arr2->length;
  //  arr3->size = 20;
    return arr3;
}


int main()
{

    struct array arr1 = { {2,5,8,12,18},5,10 };
    struct array arr2 = { {1,3,6,13,20},5,10 };
    struct array *arr3;
    arr3 = merge(&arr1, &arr2);
    std::cout << "now two array merging is given as" << "\n";
    display(*arr3);




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
