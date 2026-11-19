#include <iostream>
using namespace std;

int main() {
    int n = 35;
    int count = 0;

    for (int i = 10; i <= n; i++) {
        int last = i % 10;
        int temp = i;

        while (temp >= 10) {
            temp /= 10;
        }

        if (temp == last) {
            cout << i << endl;
            count++;
        }
    }

    cout << "Matches = " << count;

    return 0;
}