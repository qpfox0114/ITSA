#include <stdio.h>

int main() {
    int max;
    for (int i = 0; i < 3; i++) {
        int num;
        scanf("%d", &num);
        if (i == 0) {
            max = num;
        }
        else if (num > max) {
            max = num;
        }
    }
    printf("%d\n", max);
}