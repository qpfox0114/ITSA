#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int exp;
        scanf("%d", &exp);
        if (exp > 31) {
            printf("Value of more than 31\n");
        }
        else {
            printf("%d\n", 2 << exp - 1);
        }
    }
    return 0;
}