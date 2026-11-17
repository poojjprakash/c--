#include <iostream>
using namespace std;

int main() {
    float rating = 4.5;
    char section = 'A';
    bool flag = true;

    int total = sizeof(rating) + sizeof(section) + sizeof(flag);

    cout << total;
    return 0;
}