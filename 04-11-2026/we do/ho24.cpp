#include <iostream>
using namespace std;

int main() {
    int total = 900;
    int years = total / 365;
    int rest = total % 365;
    int months = rest / 30;
    int days = rest % 30;
    cout << years << endl;
    cout << months << endl;
    cout << days << endl;
    return 0;
}