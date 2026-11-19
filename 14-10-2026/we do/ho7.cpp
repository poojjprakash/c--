#include <iostream>
#include <string>
using namespace std;

int main() {
    string city = "Coimbatore";
    string district = "and North";

    string result = city + " " + district;
    result += " Hub";

    cout << result;

    return 0;
}