// array append and insert.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void append(struct array* arra, int arrrr[] , int z) // function od addition 
{
    if (arra->length < arra->size)
        for (int i = 0; i < z; i++)

            arra->A[arra->length++] = arrrr[i];   
   // arra->A[arra->length++] = y;
        
}
void insert(struct array *ar, int index, int x) // functon of insertion
{
    int i; 
    if (index >= 0 && index <= ar->length)
    {
        for (i = ar->length; i > index; i--)
            ar->A[i] = ar->A[i - 1];
        ar->A[index] = x;
      //  ar->A[ar->length++]; both this and lower do same working...
        ar->length++;
    }
}
int main()
{
    struct array arr = { {23,24,25,26,27},5,20 };
  //  append(&arr, 56);

   // display(arr);
    int arrr[11] = { 5,6,7,8,46,56,78,98,76,54,32 };//array of element passed and added
  //  std::cout << "insert element are \n ";
   
  //  insert(&arr,0,45);

  //  display(arr);
 //   std::cout << "Hello World!\n";
    std::cout << "insert element are \n ";
  //  append(&arr, 57,45);
    append(&arr, arrr , 11);
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
