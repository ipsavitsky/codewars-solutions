/**
 * @file reduce_but_grow.cpp
 * @author Ilya Savitsky (ipsavitsky234@gmail.com)
 * @brief https://www.codewars.com/kata/57f780909f7e8e3183000078
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <vector>
#include <numeric>

int grow(std::vector<int> nums) {
    return std::reduce(nums.begin(), nums.end(), 1, std::multiplies<int>());
}