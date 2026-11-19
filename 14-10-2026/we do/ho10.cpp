#include <iostream>
#include <string>
using namespace std;

int main() {
    string flower = "red rose";

    flower.insert(0, "fresh ");
    cout << flower << endl;

    flower.erase(6, 4);
    cout << flower << endl;

    flower.replace(6, 4, "lily");
    cout << flower << endl;

    return 0;
}