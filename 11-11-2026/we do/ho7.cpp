#include <iostream>
using namespace std;

int main() {
    int deposit = 50, target = 400, saved = 0, weeks = 0;

    do {
        saved += deposit;
        weeks++;
        deposit += 20;
    } while (saved < target);

    cout << "Weeks = " << weeks << endl;
    cout << "Savings = " << saved;

    return 0;
}