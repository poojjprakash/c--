#include <iostream>
using namespace std;

int main() {
    int a[6] = {21, 35, 21, 44, 21, 50};

    int target[2] = {21, 99};

    for (int k = 0; k < 2; k++) {
        int count = 0;

        for (int i = 0; i < 6; i++) {
            if (a[i] == target[k]) {
                cout << i << " ";
                count++;
            }
        }

        if (count == 0) {
            cout << "Not found";
        }

        cout << endl;
        cout << "Count = " << count << endl;
    }

    return 0;
}