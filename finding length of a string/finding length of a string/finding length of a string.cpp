// finding length of a string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char name[] = "john";
    std::cout <<"length of string is"<< strlen(name) << "\n";
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] -= 32; // for changing lower case into uppe case ....
    }
    std::cout << name << "\n";

    char toggle[] = "JaWadAhMed";
    for (int i = 0; toggle[i] != '\0'; i++)
    {
        if (toggle[i] >= 65 && toggle[i] <= 90)
        {
            toggle[i] += 32;
        }
        else if (toggle[i] >='a' && toggle[i] <= 122)
        {
            toggle[i] -= 32;
        }
   
    }
    std::cout << "after toggle case \n " << toggle<<"\n";

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
