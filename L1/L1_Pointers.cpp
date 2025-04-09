#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main()
{
    int x = 10;
    int* px = &x; // Pointer to x, stores the address of x

    cout << *px << endl; // Output the address of x

    *px = 20; // Dereference the pointer and change the value of x to 20
    cout << x << endl; // Output the new value of x

    int y = 30;
    px = &y; // Change the pointer to point to y
    cout << *px << endl; // Output the address of y
}