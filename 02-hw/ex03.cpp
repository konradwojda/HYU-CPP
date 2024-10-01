#include <iostream>
#include <assert.h>

int sum_down(int x)
{
    if (x < 0) {
        return 1;
    }
    return (x-1) + 2 * sum_down(x-1);
}

int sum_down_iterative(int x) {
    int result = 1;
    for (int i = 0; i <= x; i++) {
        result = (i - 1) + 2 * result;
    }
    return result;
}

int main() {
    int x = 0;
    for(int i = 0; i < 100; i++) {
        assert(sum_down(i) == sum_down_iterative(i));
    }
    
}