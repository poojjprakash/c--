#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||
        side1 > 10000 || side2 > 10000 || side3 > 10000) {
        cout << "Invalid input. Sides must be positive integers.";
    }
    else if (side1 + side2 > side3 &&
             side2 + side3 > side1 &&
             side1 + side3 > side2) {
        cout << "Valid triangle";
    }
    else {
        cout << "Not a valid triangle";
    }

    return 0;
}