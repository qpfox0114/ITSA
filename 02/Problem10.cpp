#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int mi;
    std::cin >> mi;
    double km = mi * 1.6;
    std::cout << "km=" << std::fixed << std::setprecision(1) << km << std::endl; // 輸出結果
    return 0;
}
