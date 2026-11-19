#include <iostream>
using namespace std;

int main() {
    int a[6] = {101, 102, 103, 104, 105};
    int size = 5;
    int index = 2;

    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            a[i] = a[i + 1];
        }

        size--;
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    return 0;
}