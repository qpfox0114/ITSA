#include <iostream>

int main() {
    int total_seconds;
    std::cin >> total_seconds;

    int days = total_seconds / 86400;
    total_seconds %= 86400;

    int hours = total_seconds / 3600;
    total_seconds %= 3600;

    int minutes = total_seconds / 60;
    int seconds = total_seconds % 60;

    std::cout << days << " days" << std::endl;
    std::cout << hours << " hours" << std::endl;
    std::cout << minutes << " minutes" << std::endl;
    std::cout << seconds << " seconds" << std::endl;

    return 0;
}