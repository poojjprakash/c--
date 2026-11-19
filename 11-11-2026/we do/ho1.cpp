#include <iostream>
using namespace std;

int main() {
    int sheets = 6, total = 0;

    for (int i = 1; i <= sheets; i++) {
        int label = 4 * i;
        cout << label << endl;
        total += label;
    }

    cout << "Total = " << total;
    return 0;
}