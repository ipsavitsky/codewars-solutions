/**
 * @file square_sum.cpp
 * @author Ilya Savitsky (ipsavitsky234@gmail.com)
 * @brief https://www.codewars.com/kata/515e271a311df0350d00000f
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <numeric>
#include <vector>

int square_sum(const std::vector<int> &numbers) {
    return std::accumulate(
        numbers.begin(), numbers.end(), 0,
        [](int sum, int current) { return sum + current * current; });
}
