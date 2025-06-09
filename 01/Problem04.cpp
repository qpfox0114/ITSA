#include <iostream>
#include <string>
#include <vector> // Using vector for dynamic arrays if needed, though fixed size is fine here

int main() {
    // 定義中英文對照表
    std::string english[] = { "dog", "cat", "duck", "cow", "fox" };
    std::string chinese[] = { "狗", "貓", "鴨", "牛", "狐" };
    int size = 5; // 數組大小

    // 輸入字串
    std::string input;
    std::cin >> input;

    // 檢查是否匹配英文
    for (int i = 0; i < size; i++) {
        if (input == english[i]) {
            std::cout << chinese[i] << std::endl;
            return 0;
        }
    }

    // 檢查是否匹配中文
    for (int i = 0; i < size; i++) {
        if (input == chinese[i]) {
            std::cout << english[i] << std::endl;
            return 0;
        }
    }
    return 0;
}
