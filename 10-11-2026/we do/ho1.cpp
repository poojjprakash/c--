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
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    }

    return 0;
}