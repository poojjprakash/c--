#include <iostream>
using namespace std;

int sum(int first, int second);

int main()
{
    int a, b;
    cin >> a >> b;

    cout << sum(a, b);

    return 0;
}

int sum(int first, int second)
{
    return first + second;
}