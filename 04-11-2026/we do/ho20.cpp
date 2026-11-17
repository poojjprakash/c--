#include <iostream>
using namespace std;

int main() {
    int total = 7384;
    int hours = total / 3600;
    int rest = total % 3600;
    int minutes = rest / 60;
    int seconds = rest % 60;
    cout << hours << endl;
    cout << minutes << endl;
    cout << seconds << endl;
    return 0;
}