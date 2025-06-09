#include <iostream>

int main() {
    char c;
    std::cin >> c;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        std::cout << "母音\n";
    }
    else {
        std::cout << "子音\n";
    }
    return 0; // Added return 0 for completeness
}
