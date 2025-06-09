#include <iostream>
#include <cmath>   // For std::ceil
#include <iomanip> // Potentially for output formatting if needed, though not strictly for this problem

int main() {
    int m; // 與健行社友的距離 (公尺)

    // 持續讀取輸入直到 EOF
    while (std::cin >> m) {
        // 計算彼此速度差 (英吋/秒)：
        // 你每秒走 1 公尺 (約 39.37 英吋)，社友每秒走 30 英吋。
        double relative_speed = 39.37 - 30.0; // 單位：英吋/秒

        // 將距離 m 公尺轉換為英吋
        double distance_in_inches = m * 39.37;

        // 計算需要的秒數，並取整數上界 (ceiling)
        int seconds = static_cast<int>(std::ceil(distance_in_inches / relative_speed));

        // 輸出結果
        std::cout << seconds << std::endl;
    }

    return 0;
}
