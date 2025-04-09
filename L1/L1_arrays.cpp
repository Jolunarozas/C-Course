#include <iostream>

using namespace std;

int main()
{ 
    int myarray[5];

    myarray[0] = 1;
    myarray[1] = 2;
    myarray[2] = 3;
    myarray[3] = 4;
    myarray[4] = 5;
    
    int sum = myarray[0] + myarray[1] + myarray[2] + myarray[3] + myarray[4];
    cout << "Sum of the array elements: " << sum << endl;

    cout << "Address of the first element: " << &myarray[0] << endl;
}