#include <stdio.h>

int main() {
    int type;
    scanf("%d", &type);  // 輸入類型

    if (type == 1) {
        printf("    *\n");
        printf("   * *\n");
        printf("  *   *\n");
        printf(" *     *\n");
        printf("*********\n");
    }
    else if (type == 2) {
        printf("    *\n");
        printf("   ***\n");
        printf("  *****\n");
        printf(" *******\n");
        printf("*********\n");
    }
    else if (type == 3) {
        printf("*********\n");
        printf(" *******\n");
        printf("  *****\n");
        printf("   ***\n");
        printf("    *\n");
    }

    return 0;
}
