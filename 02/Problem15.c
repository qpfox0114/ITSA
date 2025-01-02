#include <stdio.h>

int main() {
    int minutes;
    double cost;

    scanf("%d", &minutes);

    if (minutes <= 800) {
        cost = minutes * 0.9;
    }
    else if (minutes > 800 && minutes < 1500) {
        cost = minutes * 0.9 * 0.9; // 9 折
    }
    else {
        cost = minutes * 0.9 * 0.79; // 79 折
    }

    printf("%.1f\n", cost);

    return 0;
}