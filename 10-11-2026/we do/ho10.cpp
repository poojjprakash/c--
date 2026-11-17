#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n < -1000000000 || n > 1000000000) {
        cout << "Invalid input";
    }
    else {
        if (n < 0) {
            n = -n;
        }

        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        cout << sum;
    }

    return 0;
}