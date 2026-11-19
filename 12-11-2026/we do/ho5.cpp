#include <iostream>
using namespace std;

int main() {
    int lockers[5] = {14, 27, 31, 27, 42};
    int search[2] = {27, 99};

    for (int k = 0; k < 2; k++) {
        int found = -1;

        for (int i = 0; i < 5; i++) {
            if (lockers[i] == search[k]) {
                found = i;
                break;
            }
        }

        if (found == -1) {
            cout << "Not found" << endl;
        }
        else {
            cout << found << endl;
        }
    }

    return 0;
}