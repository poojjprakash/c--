#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < 0 || n > 1000000000) {
        cout << "Invalid Input";
    }
    else {
        long long reverse = 0;

        while (n > 0) {
            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;
        }

        cout << reverse;
    }

    return 0;
}