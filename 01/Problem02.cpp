#include <iostream>

int main() {
    int num;
    std::cin >> num; // 讀取一個四位數整數

    // 使用整數除法與取餘數分解數字
    std::cout << num / 1000 << std::endl;           // 千位
    std::cout << (num / 100) % 10 << std::endl;     // 百位
    std::cout << (num / 10) % 10 << std::endl;      // 十位
    std::cout << num % 10 << std::endl;             // 個位

    return 0;
}
