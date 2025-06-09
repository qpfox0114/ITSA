#include <iostream>
#include <bitset>  // For std::bitset

int main() {
    int num;
    std::cin >> num;
    // Assuming the input number should be treated as an 8-bit value for binary representation
    // or at least its lower 8 bits are of interest.
    std::cout << std::bitset<8>(static_cast<unsigned char>(num)) << std::endl;

    return 0;
}