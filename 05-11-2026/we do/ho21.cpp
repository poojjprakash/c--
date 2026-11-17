#include <iostream>
using namespace std;

int main() {
    int year = 2024;

    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    cout << leap;
    return 0;
}