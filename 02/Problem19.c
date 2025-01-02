#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    printf("%d\n", gcd(M, N));
    return 0;
}
