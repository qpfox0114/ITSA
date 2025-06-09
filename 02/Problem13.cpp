#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    double w, h;
    std::cin >> w >> h;
    double h_meters = h / 100.0;
    double BMI = w / (h_meters * h_meters);
    std::cout << std::fixed << std::setprecision(2) << BMI << std::endl;
    return 0;
}