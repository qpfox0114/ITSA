#include <stdio.h>

int main() {
    int T, B, H;
    scanf("%d %d %d", &T, &B, &H);
    double area = (double)(T + B) * H / 2;;
    printf("Trapezoid area:%.1lf\n", area);
    return 0;
}
