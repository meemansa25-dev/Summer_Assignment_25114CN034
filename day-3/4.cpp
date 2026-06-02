#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Get two numbers from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Store original values because 'a' and 'b' will change in the loop
    int a = num1;
    int b = num2;
    
    // Step 1: Find the GCD first using the Euclidean Algorithm
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    int gcd = a; // The GCD is now stored in 'a'
    
    // Step 2: Use the formula to find LCM
    // We divide before multiplying to prevent integer overflow errors with large numbers
    int lcm = (num1 / gcd) * num2;
    
    // Print the final result
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
    
    return 0;
}