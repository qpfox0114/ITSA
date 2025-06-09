#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int minutes;
    double cost;

    std::cin >> minutes;

    if (minutes <= 800) {
        cost = minutes * 0.9;
    }
    else if (minutes < 1500) { // Changed from minutes > 800 && minutes < 1500 for slight simplification
        cost = minutes * 0.9 * 0.9; // 9 折
    }
    else { // minutes >= 1500
        cost = minutes * 0.9 * 0.79; // 79 折
    }

    std::cout << std::fixed << std::setprecision(1) << cost << std::endl;

    return 0;
}
