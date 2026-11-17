#include <iostream>
using namespace std;

int main() {
    int token = 253;
    int d1 = token % 10;
    int r = token / 10;
    int d2 = r % 10;
    int d3 = r / 10;
    int rev = d1 * 100 + d2 * 10 + d3;
    cout << rev << endl;
    return 0;
}