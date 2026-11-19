#include <iostream>
#include <string>
using namespace std;

int main() {
    string team = "TIGER";

    for (int i = 0; i < team.length(); i++) {
        cout << i << " " << team[i] << endl;
    }

    return 0;
}