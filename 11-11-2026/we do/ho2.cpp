#include <iostream>
using namespace std;

int main() {
    int n = 10, sum = 0, evenCount = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenCount++;
        }
        else {
            sum += i * i;
        }
    }

    cout << "Odd square sum = " << sum << endl;
    cout << "Even count = " << evenCount;

    return 0;
}