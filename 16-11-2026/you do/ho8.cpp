#include <iostream>
#include <cmath>
using namespace std;

int tablesNeeded(int students);

int main()
{
    int n;
    cin >> n;

    cout << tablesNeeded(n);

    return 0;
}

int tablesNeeded(int students)
{
    return ceil(students / 4.0);
}