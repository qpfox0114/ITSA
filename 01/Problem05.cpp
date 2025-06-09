#include <iostream>
#include <vector> // For std::vector, a more C++ idiomatic way to handle dynamic arrays

int main() {
    int number;
    // Using std::vector instead of a fixed-size C-style array
    // However, for this specific problem with 5 digits, a fixed array is also fine.
    // std::vector<int> digits(5); 
    int digits[5];


    std::cin >> number;

    for (int i = 4; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < digits[i]; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
