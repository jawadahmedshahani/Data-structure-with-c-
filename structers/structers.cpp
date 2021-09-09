// structers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//using namespace std;
struct rectangle
{
    int length;
    int width;
    char n;
};
  // struct rectangle r; here can be globaly declare
int main()
{
    struct rectangle r = { 5,6,'1234'};
// locally scope 
    std::cout <<sizeof(r)<<"\n"; // here 12 because chARATER TAking 4 bytes but used only one byte
    std::cout << r.length << "\n" << r.width << "\n" << r.n<< "\n";
  //  r.length = 25;
  //  r.n = 34;
  //  r.width = 45;
  //  std::cout << r.length << "\n" << r.n << "\n" << r.width << "\n";

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
