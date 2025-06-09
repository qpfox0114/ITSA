#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        std::cin >> x >> y;
        long long result = static_cast<long long>(x + y) * (x + y); // Use long long to avoid overflow if x+y is large
        std::cout << result << std::endl;
    }
    return 0;
}
