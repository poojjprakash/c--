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

        int count = 0;

        if (n == 0) {
            count = 1;
        }
        else {
            while (n > 0) {
                count++;
                n /= 10;
            }
        }

        cout << count;
    }

    return 0;
}