#include <iostream>

/**
 * Naive solution
 */
//int main() {
//    int sum = 0;
//    for (int i = 1; i < 1000; i += 1) {
//        if (i % 3 == 0 || i % 5 == 0) {
//            sum += i;
//        }
//    }
//    std::cout << sum << std::endl;
//    return 0;
//}

/**
 * Auxiliary function for finding the arithmetic progression sum
 */
int ar_sum(int n) {
    return 0.5 * n * (n + 1);
}

/**
 * Diagram Ven solution
 * We have set A (nums divided by 3) and set B (nums divided by 5)
 * We should find -> 3 * A + 5 * B - 3 * 5 * (A intersection  B)
*/
int main() {
    int result = 0;
    int limit = 1000 - 1;
    int divisor_a = 3;
    int divisor_b = 5;
    /**
     * Find max divisor of (m=3) less than (l=1000)
     */
    int power_of_a = std::div(limit, divisor_a).quot;
    int power_of_b = std::div(limit, divisor_b).quot;
    int power_of_intersection = std::div(limit, divisor_a * divisor_b).quot;

    result = divisor_a * ar_sum(power_of_a) + divisor_b * ar_sum(power_of_b) -
             divisor_a * divisor_b * ar_sum(power_of_intersection);
    std::cout << result << std::endl;
    return 0;
}

/**
 * answer => 233168
 */
