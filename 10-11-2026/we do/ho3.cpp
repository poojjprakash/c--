#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Invalid input (less than 1)";
    }
    else if (n > 1000000) {
        cout << "Invalid input (exceeds maximum limit)";
    }
    else {
        cout << "Odd numbers from 1 to " << n << ": ";
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }

    return 0;
}