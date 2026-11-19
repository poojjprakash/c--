#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int matches = 0;

    for (int i = 2; i <= n; i++) {
        int divisors = 0;

        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors++;
            }
        }

        if (divisors == 3) {
            cout << i << endl;
            matches++;
        }
    }

    cout << "Matches = " << matches;

    return 0;
}