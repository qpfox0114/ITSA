#include <iostream>

int main() {
    int N, sum = 0;
    std::cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}
