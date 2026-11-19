#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    cin >> code;

    if (code == "BOX7") {
        cout << "Match";
    }
    else {
        cout << "Different";
    }

    return 0;
}