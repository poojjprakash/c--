#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Invalid input (less than 1)";
    }
    else if (n > 1000000) {
        cout << "Invalid input (exceeds maximum allowed)";
    }
    else {
        double average = (n + 1) / 2.0;
        cout << "Average of numbers from 1 to " << n << " is " << average;
    }

    return 0;
}