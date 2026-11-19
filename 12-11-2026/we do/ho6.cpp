#include <iostream>
using namespace std;

int main() {
    int tickets[5] = {10, 20, 30};
    int size = 3;

    for (int i = size; i > 1; i--) {
        tickets[i] = tickets[i - 1];
    }

    tickets[1] = 15;
    size++;

    for (int i = 0; i < size; i++) {
        cout << tickets[i] << " ";
    }

    cout << endl << "Size = " << size;

    return 0;
}