#include <iostream>
#include <stdexcept>

int gcd(int a, int b) {
    if (a <= 0 || b <= 0) {
        throw std::invalid_argument("One of given number is not positive.");
    }

    if (a < b) {
        std::swap(a, b);
    }


    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    int a, b;

    std::cout << "Enter two positive integers: ";
    std::cin >> a >> b;

    int result = gcd(a, b);

    std::cout << "The GCD is: " << result << std::endl;

    return 0;
}
