#include <iostream>
using namespace std;

int main() {
    int amount = 3670;
    int n500 = amount / 500;
    int r1 = amount % 500;
    int n100 = r1 / 100;
    int r2 = r1 % 100;
    int n50 = r2 / 50;
    int r3 = r2 % 50;
    int n10 = r3 / 10;
    cout << n500 << endl;
    cout << n100 << endl;
    cout << n50 << endl;
    cout << n10 << endl;
    return 0;
}