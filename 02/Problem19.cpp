#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int M, N;
    std::cin >> M >> N;
    std::cout << gcd(M, N) << std::endl; // Using the provided function
    return 0;
}
