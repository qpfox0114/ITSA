#include <stdio.h>

int main() {
    int start_hour, start_minute;
    int end_hour, end_minute;

    // 輸入起始和結束時間
    scanf("%d %d", &start_hour, &start_minute);
    scanf("%d %d", &end_hour, &end_minute);

    // 計算總停車分鐘數
    int start_total_minutes = start_hour * 60 + start_minute;
    int end_total_minutes = end_hour * 60 + end_minute;
    int total_minutes = end_total_minutes - start_total_minutes;

    // 計算停車費用
    int fee = 0;

    if (total_minutes <= 120) {
        fee += (total_minutes / 30) * 30;
    }
    else if (total_minutes <= 240) {
        fee += 120; // 前2小時的費用
        total_minutes -= 120;
        fee += (total_minutes / 30) * 40;
    }
    else {
        fee += 120; // 前2小時的費用
        total_minutes -= 120;
        fee += 160; // 接下來2小時的費用
        total_minutes -= 120;
        fee += (total_minutes / 30) * 60;
    }

    // 輸出結果
    printf("%d\n", fee);

    return 0;
}
