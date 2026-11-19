#include <iostream>
using namespace std;

int main() {
    int seats[2][3] = {
        {11, 12, 13},
        {21, 22, 23}
    };

    int row = 1, column = 2;

    cout << "Seat code = " << seats[row][column] << endl;
    cout << "Valid row indices = 0 to 1" << endl;
    cout << "Valid column indices = 0 to 2";

    return 0;
}