#include <stdio.h>
#include <string.h>

int main() {
    // 定義中英文對照表
    char* english[] = { "dog", "cat", "duck", "cow", "fox" };
    char* chinese[] = { "狗", "貓", "鴨", "牛", "狐" };
    int size = 5; // 數組大小

    // 輸入字串
    char input[20];
    scanf("%s", input);

    // 檢查是否匹配英文
    for (int i = 0; i < size; i++) {
        if (strcmp(input, english[i]) == 0) {
            printf("%s\n", chinese[i]);
            return 0;
        }
    }

    // 檢查是否匹配中文
    for (int i = 0; i < size; i++) {
        if (strcmp(input, chinese[i]) == 0) {
            printf("%s\n", english[i]);
            return 0;
        }
    }
    return 0;
}
