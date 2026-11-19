#include <iostream>
using namespace std;

int main() {
    int n = 11, cartons = 0;

    while (n > 0) {
        int packed = n < 4 ? n : 4;
        n -= packed;
        cartons++;

        cout << "Packed = " << packed << endl;
    }

    cout << "Cartons = " << cartons;

    return 0;
}