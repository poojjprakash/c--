#include <iostream>
using namespace std;

int main() {
    int students = 1250;
    int seats = 45;
    int buses = students / seats;
    int left = students % seats;
    cout << buses << endl;
    cout << left << endl;
    return 0;
}