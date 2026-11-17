#include <iostream>
using namespace std;

int totalSavings(int days);

int main()
{
    int n;
    cin >> n;

    cout << totalSavings(n) << " rupees";

    return 0;
}

int totalSavings(int days)
{
    int total = 0;

    for (int i = 1; i <= days; i++)
    {
        total = total + (i * 5);
    }

    return total;
}