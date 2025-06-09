#include <iostream>

int main() {
    int num;
    std::cin >> num;
    switch (num) {
    case 1:
        std::cout << "    *\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        break;
    case 2:
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "*****\n";
        std::cout << "*    \n";
        std::cout << "*****\n";
        break;
    case 3:
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "*****\n";
        break;
    case 4:
        std::cout << "*   *\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        break;
    case 5:
        std::cout << "*****\n";
        std::cout << "*    \n";
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "*****\n";
        break;
    case 6:
        std::cout << "*    \n";
        std::cout << "*    \n";
        std::cout << "*****\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        break;
    case 7:
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        std::cout << "    *\n";
        break;
    case 8:
        std::cout << "*****\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        break;
    case 9:
        std::cout << "*****\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        std::cout << "    *\n";
        std::cout << "*****\n";
        break;
    case 0:
        std::cout << "*****\n";
        std::cout << "*   *\n";
        std::cout << "*   *\n";
        std::cout << "*   *\n";
        std::cout << "*****\n";
        break;
    default:
        break;
    }
    return 0;
}
