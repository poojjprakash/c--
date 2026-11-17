#include <iostream>
using namespace std;

int main() {
    int stock = 30;
    int sold = stock-- - 4;
    int left = --stock + sold;
    cout << stock << endl;
    cout << sold << endl;
    cout << left;
    return 0;
}