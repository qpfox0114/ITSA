#include <iostream>
#include <algorithm> // For std::swap, optional

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y, sum = 0;
        std::cin >> x >> y;
        if (x > y) {
            // int temp = x;
            // x = y;
            // y = temp;
            std::swap(x, y); // C++ way
        }
        for (int j = x; j <= y; j++) {
            sum += j;
        }
        std::cout << sum << std::endl;
        // sum = 0; // Not necessary as sum is declared inside the loop
    }
    return 0;
}