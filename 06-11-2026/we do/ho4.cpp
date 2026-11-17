#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0 || n > 100000) {
        cout << "Invalid input";
    }
    else {
        cout << "Last Digit: " << n % 10;
    }

    return 0;
}