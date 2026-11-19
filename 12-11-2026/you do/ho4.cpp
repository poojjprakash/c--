#include <iostream>
using namespace std;

int main() {
    int a[6] = {101, 105, 110, 114};
    int size = 4;
    int capacity = 6;

    int index = 2, value = 108;

    if (size < capacity && index >= 0 && index <= size) {
        for (int i = size; i > index; i--) {
            a[i] = a[i - 1];
        }

        a[index] = value;
        size++;
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl << "Size = " << size << endl;

    index = 3;

    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            a[i] = a[i + 1];
        }

        size--;
    }

    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl << "Size = " << size;

    return 0;
}