#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    getline(cin, name);

    int pos = name.find(' ');

    if (pos != string::npos) {
        cout << name.substr(0, pos);
    }
    else {
        cout << name;
    }

    return 0;
}