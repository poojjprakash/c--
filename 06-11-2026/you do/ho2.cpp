#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double km, miles;
    cin >> km;

    if (km < 0 || km > 10000) {
        cout << "Invalid input";
    }
    else {
        miles = km * 0.621371;
        cout << fixed << setprecision(2);
        cout << "Miles: " << miles;
    }

    return 0;
}