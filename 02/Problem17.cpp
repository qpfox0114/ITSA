#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int T, S;
    double salary = 0.0;

    // 輸入工時(T)與時薪(S)
    std::cin >> T >> S;

    // 計算工資
    if (T <= 60) {
        salary = T * S;
    }
    else if (T <= 120) {
        salary = 60 * S + (T - 60) * S * 1.33;
    }
    else {
        salary = 60 * S + 60 * S * 1.33 + (T - 120) * S * 1.66;
    }

    // 輸出結果，保留小數點後一位
    std::cout << std::fixed << std::setprecision(1) << salary << std::endl;

    return 0;
}
