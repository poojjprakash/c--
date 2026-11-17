#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 1000000) {
        cout << "Invalid input";
    }
    else {
        int sum = 0;

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n) {
            cout << "Perfect Number";
        }
        else {
            cout << "Not a Perfect Number";
        }
    }

    return 0;
}