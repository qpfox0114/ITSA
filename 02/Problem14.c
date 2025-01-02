#include <stdio.h>
#include <math.h>

int main() {
    int m; // 與健行社友的距離 (公尺)

    // 持續讀取輸入直到 EOF
    while (scanf("%d", &m) != EOF) {
        // 計算彼此速度差 (英吋/秒)：
        // 你每秒走 1 公尺 (約 39.37 英吋)，社友每秒走 30 英吋。
        double relative_speed = 39.37 - 30.0; // 單位：英吋/秒

        // 將距離 m 公尺轉換為英吋
        double distance_in_inches = m * 39.37;

        // 計算需要的秒數，並取整數上界 (ceiling)
        int seconds = (int)ceil(distance_in_inches / relative_speed);

        // 輸出結果
        printf("%d\n", seconds);
    }

    return 0;
}
