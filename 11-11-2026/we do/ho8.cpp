#include <iostream>
using namespace std;

int main() {
    int num = 1331;
    int original = num, reversed = 0;

    do {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    } while (num > 0);

    cout << "Reverse = " << reversed << endl;

    if (original == reversed) {
        cout << "Palindrome";
    }
    else {
        cout << "Not palindrome";
    }

    return 0;
}