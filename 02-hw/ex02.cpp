#include <iostream>
#include <vector>
#include <algorithm>

void permutNumbers(int n) {
    std::vector<int> numbers;
    for (int i = 1; i <= n; ++i) {
        numbers.push_back(i);
    }

    do {
        for (int num : numbers) {
            std::cout << num;
        }
        std::cout << ", ";
    } while (std::next_permutation(numbers.begin(), numbers.end()));

    std::cout << std::endl;
}

int main() {
    permutNumbers(3);
}