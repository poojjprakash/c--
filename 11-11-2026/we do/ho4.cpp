#include <iostream>
using namespace std;

int main() {
    int cells = 5, target = 1000, hours = 0;

    while (cells <= target) {
        cells *= 2;
        hours++;
    }

    cout << "Hours = " << hours << endl;
    cout << "Cells = " << cells;

    return 0;
}