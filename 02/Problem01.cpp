#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int m, n;
    std::cin >> m >> n;
    double area = static_cast<double>(m * n) / 2.0; // Ensure floating point division
    std::cout << "Triangle area:" << std::fixed << std::setprecision(1) << area << std::endl;
    return 0;
}