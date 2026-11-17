#include <iostream>
int productOfDigits(int number);
int main() {
 int number;
 std::cin >> number;
 int rounds = 0;
 while (number >= 10) {
 number = productOfDigits(number);
 ++rounds;
 }
 std::cout << "Final digit " << number
 << ", rounds " << rounds << '\n';
 return 0;
}
int productOfDigits(int number) {
 int product = 1;
 do {
 product *= number % 10;
 number /= 10;
 } while (number > 0);
 return product;
}