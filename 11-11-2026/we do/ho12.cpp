#include <iostream>
using namespace std;

int main() {
    int n = 6, count = 0;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
        count++;
    }

    cout << "Passes stamped = " << count;

    return 0;
}