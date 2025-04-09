#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Insert a number: ";
    cin >> n;

    switch(n){

        case 0: 
            cout << "The number is zero" << endl;
            break;
        case 1:
            cout << "The number is one" << endl;
            break;
        case 2:
            cout << "The number is two" << endl;
            break;
        default:
            cout << "The number is greater than two" << endl;
            break;
    }

}