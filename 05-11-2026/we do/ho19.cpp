#include <iostream>
using namespace std;

int main() {
    int total = 7384;

    int hours = total / 3600;
    int remaining = total % 3600;
    int minutes = remaining / 60;
    int seconds = remaining % 60;

    cout << hours << endl;
    cout << minutes << endl;
    cout << seconds;

    return 0;
}