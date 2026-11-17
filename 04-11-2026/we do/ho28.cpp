#include <iostream>
using namespace std;

int main() {
    int seats = 52;
    int passengers = 52;
    int same = passengers == seats;
    int differ = passengers != seats;
    cout << same << endl;
    cout << differ << endl;
    return 0;
}