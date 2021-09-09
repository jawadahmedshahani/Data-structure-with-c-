// function result.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

/*int fun1(int x)
{
    if (x > 0)
    {
        
        return  fun1(x - 1);  // result is 0 cz no added any thing
        
    }
 //   std::cout << "hello sir"<<"\n";  when it is wrritten it is also eas to undestand....
    return 0;
}

int main()
{
    int x = 4;
    std::cout << fun1(x);
}*/
/*int fun1(int x)
{
    if (x > 0)
    {
        std::cout << x << "\n";
        return  fun1(x - 1);  // tail recursion ......

    }
    //   std::cout << "hello sir"<<"\n";  when it is wrritten it is also eas to undestand....
    return 0;
}

int main()
{
    int x = 4;
    std::cout << fun1(x);
}*/

int fun1(int x)
{
    if (x > 0)
    {
          fun1(x - 1);  // head recursion....
        std::cout << x << "\n";
      

    }
    //   std::cout << "hello sir"<<"\n";  when it is wrritten it is also eas to undestand....
    return 0;
}

int main()
{
    int x = 4;
    fun1(x);
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
