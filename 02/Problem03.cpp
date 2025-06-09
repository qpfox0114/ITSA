#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int n;
    std::cin >> n; // 讀取正方形的個數

    for (int i = 0; i < n; i++) {
        double W;
        std::cin >> W; // 讀取邊長
        double area = W * W;
        std::cout << std::fixed << std::setprecision(1) << area << std::endl; // 輸出結果
    }

    return 0;
}
