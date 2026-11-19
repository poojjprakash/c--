#include <iostream>
using namespace std;

int main() {
    int number = 39, rounds = 0;

    while (number >= 10) {
        int temp = number, product = 1;

        while (temp > 0) {
            product *= temp % 10;
            temp /= 10;
        }

        number = product;
        rounds++;
    }

    cout << "Final digit = " << number << endl;
    cout << "Rounds = " << rounds;

    return 0;
}