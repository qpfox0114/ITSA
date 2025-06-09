#include <iostream>
#include <cmath> // For std::pow, if interpreting as 2^exp

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int exp_val; // Renamed to avoid conflict with std::exp
        std::cin >> exp_val;
        if (exp_val > 31) {
            std::cout << "Value of more than 31\n";
        }
        else {
            // Translating C's "2 << exp - 1" which is (2 << exp_val) - 1 due to operator precedence
            // This calculates 2^(exp_val+1) - 1
            // If the intent was 2^exp_val, it should have been (1 << exp_val) or pow(2, exp_val)
            // Assuming direct translation of the C expression:
            if (exp_val < 0) { // Left shift by negative is UB
                std::cout << "Exponent cannot be negative for this calculation.\n";
            }
            else if (exp_val >= 31 && (1 << (exp_val - 1) > 0)) { // (2 << 31) would be 2^32, overflows int. (2<<30) is 2^31.
                // (2 << exp_val) can overflow int if exp_val is large (e.g., >= 30 for 32-bit int)
                // The original C code might have UB here.
                // Let's assume exp_val is within reasonable limits for (2 << exp_val) not to overflow before subtraction.
                // For exp_val = 31, (2 << 31) is UB for 32-bit int.
                // If exp_val = 30, (2 << 30) is 2^31 (INT_MAX + 1, or INT_MIN if it wraps).
                // Sticking to the literal translation of (2 << exp) - 1
                // This will likely have issues for large exp_val.
                // A safer interpretation if it means 2 to the power of exp_val: std::pow(2, exp_val) or (1LL << exp_val)
                // Given the problem context, it's often 2^exp.
                // If the C code was `1 << exp_val`, that would be 2^exp_val.
                // If the C code was `2 << (exp_val - 1)`, that would be 2^exp_val for exp_val >=1.

                // Direct translation of (2 << exp_val) - 1:
                unsigned long long result_val = (2ULL << exp_val) - 1; // Use unsigned long long to show magnitude
                std::cout << static_cast<int>(result_val) << std::endl; // Cast back to int as in original printf %d
            }
            else {
                std::cout << ((2 << exp_val) - 1) << std::endl;
            }
        }
    }
    return 0;
}
