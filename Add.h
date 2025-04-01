#include <iostream>

int add(int a, int b) {
    return a + b;
}

int add(double a, double b) { // Overloaded function for double type, for overloading the argument should be different in type or number
    return a + b; 
}