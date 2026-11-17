#include <iostream>
using namespace std;

int main() {
    int money = 125;
    int price = 150;
    int enough = money >= price;
    int less = money < price;
    cout << enough << endl;
    cout << less << endl;
    return 0;
}