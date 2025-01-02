#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); // 讀取一個四位數整數

    // 使用整數除法與取餘數分解數字
    printf("%d\n", num / 1000);           // 千位
    printf("%d\n", (num / 100) % 10);     // 百位
    printf("%d\n", (num / 10) % 10);      // 十位
    printf("%d\n", num % 10);             // 個位

    return 0;
}