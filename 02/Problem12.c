#include <stdio.h>

int main() {
    int money;
    scanf("%d", &money);
    int a = money / 10;
    int b = money % 10 / 5;
    int c = money % 10 % 5;
    printf("NT10=%d\n", a);
    printf("NT5=%d\n", b);
    printf("NT1=%d\n", c);
    return 0;
}