#include <iostream>
using namespace std;

int main() {
    int n = 4826;
    cout << (n % 2 == 0) << endl;
    cout << (n % 5 == 0) << endl;
    cout << (n % 10 > 5) << endl;
    return 0;
}