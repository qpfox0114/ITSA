#include <iostream>
#include <cmath>   // For std::sqrt and std::pow
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int x1, y1, x2, y2;
    double distance;

    std::cin >> x1 >> y1 >> x2 >> y2;
    distance = std::sqrt(std::pow(x1 - x2, 2) + std::pow(y1 - y2, 2));
    std::cout << std::fixed << std::setprecision(2) << distance << std::endl;

    return 0;
}
