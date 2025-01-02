#include <stdio.h>

int main() {
    int mi;
    scanf("%d", &mi);
    double km = mi * 1.6;
    // 手動四捨五入到小數點第一位
    km = ((int)(km * 10 + 0.5)) / 10.0;
    printf("km=%.1f\n", km); // 輸出結果
    return 0;
}