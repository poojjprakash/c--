#include <iostream>
using namespace std;

int main() {
    int ticket = 1;

    do {
        cout << ticket << endl;
        ticket += 2;
    } while (ticket <= 9);

    return 0;
}