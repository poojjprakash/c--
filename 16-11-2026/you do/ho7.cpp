#include <iostream>
using namespace std;

int readTeamSize();

int main()
{
    int size = readTeamSize();

    cout << size;

    return 0;
}

int readTeamSize()
{
    int size;
    cin >> size;

    return size;
}