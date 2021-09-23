// union intersection and difference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
struct array*unio(struct array* arr1, struct array* arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct array arr4;

    //  struct array *arr3 = (struct array*)malloc(sizeof(struct array)); in heap array will be laocated
    struct array arr3[20]; // in stack array will be locte

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
            arr3->a[k++] = arr1->a[i++];
        else if (arr2->a[j] < arr1->a[i])
            arr3->a[k++] = arr2->a[j++];
        else
        {
            arr3->a[k++] = arr1->a[i++]; j++;
        }
    }

    arr3->length = k;
    //  arr3->size = 20;
    return arr3;
}
struct array* differ(struct array* arr1, struct array* arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct array arr4;

    //  struct array *arr3 = (struct array*)malloc(sizeof(struct array)); in heap array will be laocated
    struct array arr3[20]; // in stack array will be locte

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
            arr3->a[k++] = arr1->a[i++];
        else if (arr2->a[j] < arr1->a[i])
            j++;
        else
        {
            i++; j++;
        }
    }
    for (; i < arr1->length; i++)
        arr3->a[k++] = arr1->a[i];
    arr3->length = k;
    //  arr3->size = 20;
    return arr3;
}
struct array* intersec(struct array* arr1, struct array* arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct array arr4;

    //  struct array *arr3 = (struct array*)malloc(sizeof(struct array)); in heap array will be laocated
    struct array arr3[20]; // in stack array will be locte

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->a[i] < arr2->a[j])
            i++;
        else if (arr2->a[j] < arr1->a[i])
            j++;
        else if(arr2->a[j] == arr1->a[i])
        {
            arr3->a[k++] = arr1->a[i++];
            j++;
        }
    }

    arr3->length = k;
    //  arr3->size = 20;
    return arr3;
}
int main()
{

  /*  struct array arr1 = {{2,5,8,12,18},5,10};
    struct array arr2 = { {1,3,5,12,20},5,10 };
    struct array* arr3;
    arr3 = unio(&arr1, &arr2);
    std::cout << "now two array union is  given as" << "\n";
    display(*arr3);*/


   /* struct array arr1 = {{2,4,8,12,18},5,10};
    struct array arr2 = { {1,3,5,12,20},5,10 };
    struct array* arr3;
    arr3 = differ(&arr1, &arr2);
    std::cout << "now two array diffeence is  given as" << "\n";
    display(*arr3); */


    struct array arr1 = { {2,4,8,12,18},5,10 };
    struct array arr2 = { {2,3,8,12,18},5,10 };
    struct array* arr3;
    arr3 = intersec(&arr1, &arr2);
    std::cout << "now two array intersection is  given as" << "\n";
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


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
