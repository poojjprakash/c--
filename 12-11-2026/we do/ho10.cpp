#include <iostream>
using namespace std;

int main() {
    int morning[2][3] = {
        {2, 4, 1},
        {3, 0, 5}
    };

    int evening[2][3] = {
        {7, 1, 6},
        {2, 8, 4}
    };

    int total[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            total[i][j] = morning[i][j] + evening[i][j];
            cout << total[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}