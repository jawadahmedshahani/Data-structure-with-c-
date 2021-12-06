// finding length of a string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    char name[] = "john";
    int vcount =0,ccount=0; int wcount = 1;
    std::cout <<"length of string is"<< strlen(name) << "\n";
    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] -= 32; // for changing lower case into uppe case ....
    }
    std::cout << name << "\n";

    char toggle[] = "JaWadAhMed how are you jnab";
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
   
    for (int i = 0; toggle[i] != '\0'; i++)
    {
        if (toggle[i] == 'a' || toggle[i] == 'e' || toggle[i] == 'i' || toggle[i] == 'o' || toggle[i] == 'u' || toggle[i] == 'A' || toggle[i] == 'E' || toggle[i] == 'I' || toggle[i] == 'O' || toggle[i] == 'U')
            vcount++;
        else if (toggle[i] >= 65 && toggle[i] <= 90 || toggle[i] >= 97 && toggle[i] <= 122)
            ccount++;
    }

    for (int i = 0; toggle[i] != '\0'; i++)
    {
        if (toggle[i] == ' ' && toggle[i - 1] != ' ')
            wcount++;
    }
    std::cout << "after toggle case \n " << toggle<<"\n";

    std::cout <<"vowel count are"<<vcount<<"\n"<<"consent count are"<<ccount<<"\n"<<"total words in string are"<<wcount;
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
