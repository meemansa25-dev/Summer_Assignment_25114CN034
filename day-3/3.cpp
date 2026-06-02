#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Get two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    int a = num1;
    int b = num2;
    while (b != 0) {
        int remainder = a % b;
        a = b;          // Move 'b' to 'a'
        b = remainder;  // Move 'remainder' to 'b'
    }
    
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << a << endl;
    
    return 0;
}