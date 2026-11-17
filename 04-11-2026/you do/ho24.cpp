#include <iostream>
using namespace std;

int main() {
    int total = 1200;
    int years = total / 365;
    int remaining = total % 365;
    int months = remaining / 30;
    int days = remaining % 30;
    cout << years << endl;
    cout << months << endl;
    cout << days;
    return 0;
}