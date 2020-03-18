#include <iostream>

int fibonacci_sum(int limit) {
    int a = 1;
    int b = 2;
    int sum = 0;

    while (b < limit) {
        if ((b % 2) == 0) {
            sum += b;
        }
        int c = a + b;
        a = b;
        b = c;
    }
    return sum;
}

/**
 * Fibonacci sequence
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
 *                               i:10
*/
int main() {
    int limit = 4 * 10e6;
    int sum = fibonacci_sum(limit);
    std::cout << sum << std::endl;
    return 0;
}

// 19544084