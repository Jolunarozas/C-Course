#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n == 0 || n == 1){
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main(){
    cout << "Insert a number: ";
    int n;
    cin >> n;
    cout << "The Fibonacci of " << n << " is: " << fibonacci(n) << endl;

}