#include <iostream>
#include <algorithm> // For std::max, optional

int main() {
    int max_val; // Renamed to avoid conflict if any std::max is used broadly
    for (int i = 0; i < 3; i++) {
        int num;
        std::cin >> num;
        if (i == 0) {
            max_val = num;
        }
        else { // Can use std::max here too
            if (num > max_val) {
                max_val = num;
            }
        }
        // Or: if (i == 0) max_val = num; else max_val = std::max(max_val, num);
    }
    std::cout << max_val << std::endl;
    return 0; // Added return 0
}