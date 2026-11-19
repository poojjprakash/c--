#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, club;

    cin >> name >> club;

    cout << name + " - " + club << endl;

    if (club == "Robotics") {
        cout << "Match";
    }
    else {
        cout << "Different";
    }

    return 0;
}