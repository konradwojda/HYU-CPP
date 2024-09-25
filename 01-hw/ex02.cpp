#include <iostream>

int main() {
    int a,b,c;

    std::cout << "Enter three numbers." << std::endl;

    std::cin >> a >> b >> c;

    int max_value = a;

    if (b > max_value) {
        max_value = b;
    }

    if (c > max_value) { 
        max_value = c;
    }

    std::cout << "The largest number: " << max_value << std::endl;

    return 0;

}