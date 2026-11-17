#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        cout << "Greatest = " << a;
    }
    else if (b > a) {
        cout << "Greatest = " << b;
    }
    else {
        cout << "Greatest = " << a;
    }

    return 0;
}