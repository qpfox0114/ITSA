#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        std::cout << x << " " << x * x << " " << x * x * x << std::endl;
    }
    return 0;
}