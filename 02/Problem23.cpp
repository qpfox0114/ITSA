#include <iostream>
#include <iomanip> // For std::hex and std::uppercase

int main() {
    int num;
    std::cin >> num;
    std::cout << std::hex << std::uppercase << num << std::endl;

    return 0;
}
