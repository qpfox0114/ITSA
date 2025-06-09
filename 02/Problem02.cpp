#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int T, B, H;
    std::cin >> T >> B >> H;
    double area = static_cast<double>(T + B) * H / 2.0; // Ensure floating point division
    std::cout << "Trapezoid area:" << std::fixed << std::setprecision(1) << area << std::endl;
    return 0;
}
