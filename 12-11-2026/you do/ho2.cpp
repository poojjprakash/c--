#include <iostream>
using namespace std;

int main() {
    int a[5] = {55, 72, 68, 91, 83};

    int index = 2, score = 76;

    if (index >= 0 && index < 5) {
        a[index] = score;

        for (int i = 0; i < 5; i++) {
            cout << a[i] << " ";
        }
    }
    else {
        cout << "Invalid index";
    }

    cout << endl;

    int b[5] = {55, 72, 68, 91, 83};

    index = 5;
    score = 60;

    if (index >= 0 && index < 5) {
        b[index] = score;

        for (int i = 0; i < 5; i++) {
            cout << b[i] << " ";
        }
    }
    else {
        cout << "Invalid index";
    }

    return 0;
}