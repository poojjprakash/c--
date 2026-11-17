#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    cin >> base >> exponent;

    if (base < 1 || base > 100 || exponent < 0 || exponent > 10) {
        cout << "Invalid input";
    }
    else {
        long long result = 1;

        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }

        cout << result;
    }

    return 0;
}