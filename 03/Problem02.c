#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') printf("母音\n");
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') printf("母音\n");
    else printf("子音\n");
}