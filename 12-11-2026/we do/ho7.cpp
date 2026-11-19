#include <iostream>
using namespace std;

int main() {
    int tickets[5] = {10, 15, 20, 30};
    int size = 4;

    for (int i = 1; i < size - 1; i++) {
        tickets[i] = tickets[i + 1];
    }

    size--;

    for (int i = 0; i < size; i++) {
        cout << tickets[i] << " ";
    }

    cout << endl << "Size = " << size;

    return 0;
}