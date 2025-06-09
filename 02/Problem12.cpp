#include <iostream>

int main() {
    int money;
    std::cin >> money;
    int a = money / 10;
    int b = money % 10 / 5;
    int c = money % 10 % 5;
    std::cout << "NT10=" << a << std::endl;
    std::cout << "NT5=" << b << std::endl;
    std::cout << "NT1=" << c << std::endl;
    return 0;
}
