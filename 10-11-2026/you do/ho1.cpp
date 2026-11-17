#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Invalid input (less than 1)";
    }
    else if (n > 1000000) {
        cout << "Invalid input";
    }
    else {
        long long sum = 0;

        for (int i = 2; i <= n; i += 2) {
            sum += i;
        }

        cout << sum;
    }

    return 0;
}