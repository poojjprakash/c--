#include <iostream>
using namespace std;

int previewTicketPrice(int price);

int main() {
    int price;
    cin >> price;

    cout << price << " " << previewTicketPrice(price);

    return 0;
}

int previewTicketPrice(int price) {
    price = price + 20;
    return price;
}