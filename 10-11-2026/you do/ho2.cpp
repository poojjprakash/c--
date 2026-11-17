#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 1 || b < 1 || a > 10000 || b > 10000) {
        cout << "Invalid input";
    }
    else {
        int lcm = (a > b) ? a : b;

        while (lcm % a != 0 || lcm % b != 0) {
            lcm++;
        }

        cout << "LCM = " << lcm;
    }

    return 0;
}