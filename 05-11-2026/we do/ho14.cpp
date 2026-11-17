#include <iostream>
using namespace std;

int main() {
    int units = 250;
    int bill = 100 * 2 + (units - 100) * 3;

    cout << bill;
    return 0;
}