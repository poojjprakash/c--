#include <iostream>
using namespace std;

int main() {
    int rows = 3, columns = 4, sum = 0, maximum = 0;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            int value = i * j;
            cout << value << " ";
            sum += value;

            if (value > maximum) {
                maximum = value;
            }
        }
        cout << endl;
    }

    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << maximum;

    return 0;
}