#include <iostream>
using namespace std;

int main() {
    int rows = 4, total = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
            total += j;
        }
        cout << endl;
    }

    cout << "Total = " << total;

    return 0;
}