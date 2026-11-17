#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 1000) {
        cout << "Invalid input";
    }
    else {
        int count = 0;
        int num = 2;

        while (count < n) {
            bool prime = true;

            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    prime = false;
                    break;
                }
            }

            if (prime) {
                count++;
            }

            if (count < n) {
                num++;
            }
        }

        cout << num;
    }

    return 0;
}