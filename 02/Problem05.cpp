#include <iostream>

int main() {
    int x, y;

    std::cin >> x >> y;

    std::cout << x << "+" << y << "=" << x + y << std::endl;

    std::cout << x << "*" << y << "=" << static_cast<long long>(x) * y << std::endl; // Use long long for product

    std::cout << x << "-" << y << "=" << x - y << std::endl;

    if (y == 0) { // Handle division by zero if necessary, though problem constraints might prevent this
        std::cout << "Error: Division by zero." << std::endl;
    }
    else {
        int quotient = x / y;
        int remainder = x % y;
        // Adjust for negative remainder if x is negative and y is positive, to match typical "Euclidean" or "floored" division remainder expectations for display
        if (remainder < 0 && y > 0) { // Or if (x < 0 && remainder != 0 && y > 0)
            // This specific problem's C code logic for negative x:
            // if ((x % y) < 0) printf("%d/%d=%d...%d\n", x, y, x / y - 1, x % y + y);
            // This implies a specific definition of quotient and remainder for negative dividends.
            // C++ standard for x % y: sign of result is implementation-defined if one operand is negative before C++11.
            // From C++11, sign of x % y is sign of x.
            // The original C code's logic:
            if (x % y < 0 && y > 0) { // Assuming y is positive as is typical for divisor in such problems
                std::cout << x << "/" << y << "=" << (x / y - 1) << "..." << (x % y + y) << std::endl;
            }
            else if (x % y < 0 && y < 0) { // If both are negative, x/y is positive or zero. x%y is negative or zero.
                // Example: -5 / -2 = 2, -5 % -2 = -1. Original C code: -5/-2=2...-1
                std::cout << x << "/" << y << "=" << quotient << "..." << remainder << std::endl;
            }
            else {
                std::cout << x << "/" << y << "=" << quotient << "..." << remainder << std::endl;
            }
        }
    }
    return 0;
}
