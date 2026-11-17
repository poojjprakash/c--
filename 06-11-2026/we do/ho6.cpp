#include <iostream>
using namespace std;

int main() {
    bool is_raining;
    cin >> is_raining;

    if (is_raining == true) {
        cout << "Activity: Play video games";
    }
    else {
        cout << "Activity: Play outside";
    }

    return 0;
}