// 2d array declaration and definition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
  /*  int a[3][4];// = { {1,2,3,4},{22,23,24,25},{24,34,35,36} };
    int i, j;
    //  a[1][2] = 78;
    for (i = 0; i < 3; i++)
    {
    //    std::cout << "enter the " << i + 1  << "value" << "\n";
        for (j = 0; j < 4; j++)
        {
            std::cout <<"enter the "<<(j+1)+(i*4)<< "value"<<"\n";
            std::cin >> a[i][j];
        }
    }
    std::cout << " the printed values of array are" << "\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            std::cout << a[i][j] << "\n";
        }
    }

    std::cout << "Hello World!\n"; */
   /* int* b[3];  // array of pointer inside stack     // for creating 3 arrays in heap but first is in stack
    b[0] = new int[5]; // array in heap
    b[1] = new int[5]; // array in heap
    b[2] = new int[5]; // array in heap
    for (int i = 0; i < 3; i++)
    {
        //    std::cout << "enter the " << i + 1  << "value" << "\n";
        for (int j = 0; j < 5; j++)
        {
            std::cout << "enter the " << (j + 1) + (i * 5) << "value" << "\n";
            std::cin >> b[i][j];
        }
    }
    std::cout << " the printed values of array are" << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << b[i][j] << "\n";
        }
    }*/
    int** c; // just double pointer variable in stack bcz no new operator // allocating memory in heap ....
     c = new int*[3];  // array of pointer of type of integer in heap bcz new operator
    c[0] = new int[6]; // array in heap
    c[1] = new int[6];  // array in heap
    c[2] = new int[6];  // array in heap
    for (int i = 0; i < 3; i++)
    {
        //    std::cout << "enter the " << i + 1  << "value" << "\n";
        for (int j = 0; j < 6; j++)
        {
            std::cout << "enter the " << (j + 1) + (i * 6) << "value" << "\n";
            std::cin >> c[i][j];
        }
    }
    std::cout << " the printed values of array are" << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            std::cout << c[i][j] << "\n";
        }
    }



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
