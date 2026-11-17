#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cin >> a >> b;

    if (a < -1000000 || a > 1000000 || b < -1000000 || b > 1000000) {
        cout << "Invalid input. A and B must be between -10^6 and 10^6.";
    }
    else {
        temp = a;
        a = b;
        b = temp;

        cout << "After Swap: A = " << a << ", B = " << b;
    }

    return 0;
}