#include <iostream>
using namespace std;

int main() {
    int rows = 4, columns = 6;
    int count = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "#";
                count++;
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
    }

    cout << "Border positions = " << count;

    return 0;
}