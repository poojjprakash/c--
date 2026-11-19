#include <iostream>
#include <string>
using namespace std;

int main() {
    string code, description;

    cin >> code;
    cin.ignore();
    getline(cin, description);

    cout << code << endl;
    cout << description;

    return 0;
}