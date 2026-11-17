#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 0 || age > 120) {
        cout << "Invalid age";
    }
    else if (age >= 18) {
        cout << "Eligible to vote";
    }
    else {
        cout << "Ineligible to vote";
    }

    return 0;
}