#include <iostream>
using namespace std;

int main() {
    int a[6];

    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }

    cout << "First = " << a[0] << endl;
    cout << "Last = " << a[5] << endl;

    for (int i = 5; i >= 0; i--) {
        cout << a[i] << " ";
    }

    return 0;
}