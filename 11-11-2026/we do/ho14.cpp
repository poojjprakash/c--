#include <iostream>
using namespace std;

int main() {
    int n = 12, count = 0;

    for (int i = 2; i <= n; i++) {
        int divisors = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors++;
            }
        }

        if (divisors == 2) {
            cout << i << endl;
            count++;
        }
    }

    cout << "Prime cards = " << count;

    return 0;
}