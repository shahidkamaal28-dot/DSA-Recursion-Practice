#include<iostream>
using namespace std;
 
int recFactorial(int n) {

    cout << "Calling recFactorial(" << n << ")" << endl;

    if (n == 0 || n == 1) {
        cout << "Returning from recFactorial(" << n << ") = 1" << endl;
        return 1;
    }
    else {
        int result = n * recFactorial(n - 1);

        cout << "Returning from recFactorial(" << n << ") = " << result << endl;

        return result;
    }
}

int iteFactorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Error";
        return 0;
    }

   
    int recursiveResult = recFactorial(n);

    cout << "\nRecursive Factorial of " << n << " = "
         << recursiveResult << endl;

    
    int iterativeResult = iteFactorial(n);

    cout << "Iterative Factorial of " << n << " = "
         << iterativeResult << endl;

    return 0;
}