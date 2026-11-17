#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Fahrenheit: " << fahrenheit << " F";

    return 0;
}