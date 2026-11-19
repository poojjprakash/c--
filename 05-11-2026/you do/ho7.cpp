#include <iostream>
using namespace std;

int main() {
    float rating = 4.5;
    char section = 'A';
    bool flag = true;

    cout << sizeof(rating) + sizeof(section) + sizeof(flag);
    return 0;
}