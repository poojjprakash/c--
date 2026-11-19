#include <iostream>
using namespace std;

int main() {
    int start = 1020;

    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " = " << start + i * 2 << endl;
    }

    cout << "arr[5] cannot be accessed";

    return 0;
}