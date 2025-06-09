#include <iostream>

int main() {
    int start_hour, start_minute;
    int end_hour, end_minute;

    // 輸入起始和結束時間
    std::cin >> start_hour >> start_minute;
    std::cin >> end_hour >> end_minute;

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
        // total_minutes -= 120; // This was already subtracted
        fee += 160; // 接下來2小時的費用
        total_minutes -= 120; // Subtract the next 2 hours (already subtracted 2 hours before)
        fee += (total_minutes / 30) * 60;
    }

    // 輸出結果
    std::cout << fee << std::endl;

    return 0;
}
