#include <stdio.h>
#include <math.h>

int main() {
    double C;
    scanf("%lf", &C);
    double F = C * 9.0 / 5 + 32;
    F = round(F * 10) / 10;
    printf("%.1lf\n", F);
    return 0;
}