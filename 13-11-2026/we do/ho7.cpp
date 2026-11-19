#include <iostream>
using namespace std;

int main() {
    int a[6] = {41, 72, 15, 72, 60, 92};
    int target;
    cin >> target;

    int index = -1;

    for (int i = 0; i < 6; i++) {
        if (a[i] == target) {
            index = i;
            break;
        }
    }

    cout << index;

    return 0;
}