#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << ": ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number to print Fibonacci Series up to: ";
    cin >> n;
    
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        printFibonacci(n);
    }

    return 0;
}

