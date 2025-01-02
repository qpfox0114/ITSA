#include <stdio.h>

int main() {
    double w, h;
    scanf("%lf %lf", &w, &h);
    double BMI = w / ((h/100) * (h/100));
    printf("%.2lf\n", BMI);
    return 0;
}