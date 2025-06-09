#include <iostream>
#include <cmath>   // For std::round
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    double C;
    std::cin >> C;
    double F = C * 9.0 / 5.0 + 32.0; // Ensure floating point division
    // The C code rounds F*10 then divides by 10. std::setprecision usually handles rounding.
    // If specific rounding of F*10 is needed:
    // F = std::round(F * 10.0) / 10.0;
    std::cout << std::fixed << std::setprecision(1) << F << std::endl;
    return 0;
}