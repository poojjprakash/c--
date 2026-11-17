#include <iostream>
using namespace std;

int main() {
    int amount = 4860;
    int n500 = amount / 500;
    amount %= 500;
    int n100 = amount / 100;
    amount %= 100;
    int n50 = amount / 50;
    amount %= 50;
    int n10 = amount / 10;
    cout << n500 << endl;
    cout << n100 << endl;
    cout << n50 << endl;
    cout << n10;
    return 0;
}