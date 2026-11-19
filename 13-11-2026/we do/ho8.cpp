#include <iostream>
using namespace std;

int main() {
    int a[6] = {41, 72, 15, 72, 60, 72};
    int target;
    cin >> target;

    int count = 0;

    for (int i = 0; i < 6; i++) {
        if (a[i] == target) {
            cout << i << " ";
            count++;
        }
    }

    if (count == 0) {
        cout << "No matches";
    }

    cout << endl << "Count: " << count;

    return 0;
}