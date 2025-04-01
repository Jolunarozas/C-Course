#include <iostream>
#include "Add.h" // Include the header file for the add function

using std::cout;
using std::endl;
using std::string;

void DisplayGreeting() {
    cout << "Hello, World!" << endl;
}

// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b) { // Overloaded function for double type, for overloading the argument should be different in type or number
// //     // This function is overloaded to handle double type arguments
// //     // If we only have this function, and a and b are integers, they will be implicitly converted to double
// //     // The conversion from a smaller (4 byte) to a larger (8 byte) type is called promotion
// //     // The opossitive is called narrowing conversion
//     return a + b;
// }

int main() {

    // Overloading 

    double x = 3.5, y = x++; // x becomes 3, y becomes 3, then x becomes 4
    // int x = 3, y = ++x; // x becomes 4, y becomes 4, then x remains 4
    int result = add(x, y); // result will be 3 + 3 = 6 or 4 + 4 = 8 depending on the increment method used
    cout << "Result of addition: " << result << endl; // Output the result of the addition
    cout << x << endl;

    // Casting: Converting from one type to another explicitly
    int a = 3, b = 2;

    cout << "Integer division: " << a / b << endl; // This will perform integer division, result is 1
    // To get a floating-point result, we need to cast one of the integers to double
    cout << "Casts: " <<static_cast<double>(a) / b << endl;

    // Const keyword: Used to declare constants, which are variables that cannot be modified after initialization

    const double pi = 3.14159; // pi is a constant, its value cannot be changed
    // pi = 3.14; // This will cause a compilation error because pi is const


    DisplayGreeting();


    return 0;
}