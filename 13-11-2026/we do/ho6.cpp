#include <iostream>
using namespace std;

int main() {
    int a[5] = {28, 31, 26, 30, 29};

    a[2] = 32;

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}