#include <iostream>

using namespace std;

float factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } 
    else {
        int output = 1;
        for (int i = 1; i <= n; i++){
            output *= i;
        }
        return output;
    }
}

int main(){
    cout << "Insert a number: ";
    int n;
    cin >> n;
    cout << "The factorial of " << n << " is: " << factorial(n) << endl;

    if (n%2 == 0){
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }
    
}