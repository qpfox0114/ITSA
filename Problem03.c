#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num); // 讀取一個四位數整數

    // 使用整數除法與取餘數分解數字
    int a = num / 1000;           // 千位
    int b = (num / 100) % 10;     // 百位
    int c = (num / 10) % 10;      // 十位
    int d = num % 10;             // 個位

    printf("%d,%d,%d,%d\n", d, c, b, a);
    return 0;
}