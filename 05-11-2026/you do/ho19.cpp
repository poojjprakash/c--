#include <iostream>
using namespace std;

int main() {
    int total = 7384;
    int hours = total / 3600;
    int minutes = total % 3600 / 60;
    int seconds = total % 60;

    cout << hours << endl;
    cout << minutes << endl;
    cout << seconds;
    return 0;
}