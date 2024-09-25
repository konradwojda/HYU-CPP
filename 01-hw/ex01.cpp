#include <iostream>

int main() {
    int x = -5, y = 7;
    double item = 1.5, MIN = -12.0;
    char DAY = 'M';
    int num = 12, power = 1024;
    int MAX = 1024, Sens = 12;

    bool condition1 = (x > y) && !y;
    std::cout << "(x > y) && !y: " << condition1 << std::endl;

    bool condition2 = (item > MIN) || (DAY != 'M');
    std::cout << "(item > MIN) || (DAY != 'M'): " << condition2 << std::endl;

    bool condition3 = ((num * 128) < power) && y;
    std::cout << "((num * 128) < power) && y: " << condition3 << std::endl;

    bool condition4 = (!(power != MAX)) && (Sens == num);
    std::cout << "(!(power != MAX)) && (Sens == num): " << condition4 << std::endl;

    bool condition5 = ((y + x) < num) || (DAY == 'M');
    std::cout << "((y + x) < num) || (DAY == 'M'): " << condition5 << std::endl;

    bool condition6 = (Sens * (!y)) != 0;
    std::cout << "(Sens * (!y)) != 0: " << condition6 << std::endl;

    bool condition7 = (!x || y) && (!y || x);
    std::cout << "(!x || y) && (!y || x): " << condition7 << std::endl;

    return 0;
}
