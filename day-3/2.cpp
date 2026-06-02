#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    // Get the range from the user
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    
    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;

   
    for (int num = start; num <= end; num++) {
        
       
        if (num <= 1) {
            continue; 
        }
        
        bool isPrime = true;
        
    
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; 
                break;           
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}