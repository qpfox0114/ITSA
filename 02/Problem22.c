#include <stdio.h>

void printBinary(int num) {
    unsigned char mask = 1 << 7; // 10000000
    for (int i = 0; i < 8; i++) {
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    unsigned char mask = 1 << 7; // 10000000
    for (int i = 0; i < 8; i++) {
        if (num & mask) {
            printf("1");
        }
        else {
            printf("0");
        }
        mask >>= 1;
    }
    printf("\n");

    return 0;
}