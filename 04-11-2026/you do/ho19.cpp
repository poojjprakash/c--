#include <iostream>
using namespace std;

int main() {
    int token = 407;
    int a = token % 10;
    int b = (token / 10) % 10;
    int c = token / 100;
    cout << a * 100 + b * 10 + c;
    return 0;
}