#include <iostream>

int main() {
    int num;
    int sum = 0;

    do {
        std::cout << "Enter a number. Enter 0 to exit." << std::endl;
        std::cin >> num;
        
        sum += num;
        
        std::cout << "Cumulative sum: " << sum << std::endl;
        
    } while (num != 0);

    return 0;
}
