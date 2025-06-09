#include <iostream>

int main() {
    int type;
    std::cin >> type;  // 輸入類型

    if (type == 1) {
        std::cout << "    *\n";
        std::cout << "   * *\n";
        std::cout << "  *   *\n";
        std::cout << " *     *\n";
        std::cout << "*********\n";
    }
    else if (type == 2) {
        std::cout << "    *\n";
        std::cout << "   ***\n";
        std::cout << "  *****\n";
        std::cout << " *******\n";
        std::cout << "*********\n";
    }
    else if (type == 3) {
        std::cout << "*********\n";
        std::cout << " *******\n";
        std::cout << "  *****\n";
        std::cout << "   ***\n";
        std::cout << "    *\n";
    }

    return 0;
}
