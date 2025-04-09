#include <iostream>

using std::cout;
using std::endl;
using std::string;

void IncrementByOne(int n) // argument passed by value
{
    n = n +1; // This will not affect the original variable in main
}

void IncrementByOneRef(int &n) // argument passed by reference
{
    n = n +1; // This will affect the original variable in main
    // This is useful to avoid copying large objects but also you can modify by error the original variable
}

void IncrementByOneConstRef(const int &n) // argument passed by const reference
{
    // n = n +1; // This will cause a compilation error because n is const
    cout << "Value of n in IncrementByOneConstRef: " << n << endl; // This will output the value of n without modifying it
}
int main()
{
    int x = 5;
    cout << "Before increment: " << x << endl; // Output the value of x before incrementing
    IncrementByOne(x); // Call the function to increment x by one
    cout << "After increment: " << x << endl; // Output the value of x after incrementing

    IncrementByOneRef(x); // Call the function to increment x by one using reference
    cout << "After increment by reference: " << x << endl; // Output the value of x after incrementing by reference
    return 0;
}