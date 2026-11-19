#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "red blue";

    int pos = s.find("blue");

    cout << pos << endl;
    cout << s.substr(pos) << endl;

    cout << s.find("pink");

    return 0;
}