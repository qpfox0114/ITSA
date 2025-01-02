#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 讀取正方形的個數

    for (int i = 0; i < n; i++) {
        double W;
        scanf("%lf", &W); // 讀取邊長
        double area = W * W;
        // 手動四捨五入到小數點第一位
        area = ((int)(area * 10 + 0.5)) / 10.0;
        printf("%.1f\n", area); // 輸出結果
    }

    return 0;
}

