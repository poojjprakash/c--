#include <iostream>
using namespace std;

double areaOfTriangle(double base, double height);

int main()
{
    double b, h;
    cin >> b >> h;

    cout << areaOfTriangle(b, h);

    return 0;
}

double areaOfTriangle(double base, double height)
{
    return (base * height) / 2;
}