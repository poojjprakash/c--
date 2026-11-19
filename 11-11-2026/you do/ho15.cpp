#include <iostream>
using namespace std;

int main() {
    int n = 25;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int temp = i;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit == 2) {
                count++;
            }

            temp /= 10;
        }
    }

    cout << "Digit 2 appearances = " << count;

    return 0;
}