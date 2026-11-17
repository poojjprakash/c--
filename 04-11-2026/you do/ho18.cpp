#include <iostream>
using namespace std;

int main() {
    int code = 7351;
    int a = code % 10;
    int b = (code / 10) % 10;
    int c = (code / 100) % 10;
    int d = code / 1000;
    cout << a + b + c + d;
    return 0;
}