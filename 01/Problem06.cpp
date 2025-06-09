#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
