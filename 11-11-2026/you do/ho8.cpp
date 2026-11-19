#include <iostream>
using namespace std;

int main() {
    int code = 4026;
    int sum = 0;

    do {
        int digit = code % 10;
        sum += digit;
        code /= 10;
    } while (code > 0);

    cout << "Digit sum = " << sum;

    return 0;
}