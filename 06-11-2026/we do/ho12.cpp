#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if ((n >= 100 && n <= 999) || (n >= -999 && n <= -100)) {
        cout << "Yes, it is a three-digit number.";
    }
    else {
        cout << "No, not a three-digit number.";
    }

    return 0;
}