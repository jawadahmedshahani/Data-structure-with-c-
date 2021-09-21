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
//void append(struct array *arra, int x, int y)

int delt(struct array* ar, int index) // functon of insertion
{
    int x = 0;
    int i;
    if (index >= 0 && index < ar->length)
    {
        x = ar->A[index];  // written here for understanding....
        for (i = index; i <ar->length-1; i++)
            ar->A[i] = ar->A[i + 1];
    //    x = ar->A[index]; here can be written as abdulbari...
        //  ar->A[ar->length++]; both this and lower do same working...
        ar->length--;
        return x;
    }
    return 0;
}
int main()
{
    struct array arr = { {23,24,25,26,27},5,20 };
    std::cout<<"deleted element is"<<delt(&arr, 3)<<"\n";   
    std::cout << "now new array is"<<"\n";
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
