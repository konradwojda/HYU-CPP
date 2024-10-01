#include <iostream>

unsigned long long binomialCoefficient(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    }

    return binomialCoefficient(n - 1, r - 1) + binomialCoefficient(n - 1, r);
}

int main() {
    int n, r;

    std::cout << "Enter two integers (n and r) for calculatin binomial coefficient:" << std::endl;
    std::cin >> n >> r;

    unsigned long long result = binomialCoefficient(n, r);
    std::cout << "C(" << n << ", " << r << ") = " << result << std::endl;

    return 0;
}