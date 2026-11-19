#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            a[count] = i;
            count++;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }

    return 0;
}