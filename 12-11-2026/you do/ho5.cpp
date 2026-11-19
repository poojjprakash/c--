#include <iostream>
using namespace std;

int main() {
    int a[3][2] = {
        {5, 8},
        {3, 7},
        {9, 2}
    };

    int b[3][2] = {
        {4, 1},
        {6, 5},
        {2, 8}
    };

    int c[3][2];

    for (int i = 0; i < 3; i++) {
        int total = 0;

        for (int j = 0; j < 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
            total += c[i][j];
        }

        cout << endl;
        cout << "Total = " << total << endl;
    }

    return 0;
}