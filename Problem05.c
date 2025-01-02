#include <stdio.h>

int main() {
    int number;
    int digits[5];

    scanf("%d", &number);

    for (int i = 4; i >= 0; i--) {
        digits[i] = number % 10;
        number /= 10;
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < digits[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
