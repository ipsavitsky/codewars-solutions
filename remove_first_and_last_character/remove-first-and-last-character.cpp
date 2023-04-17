/**
 * @file remove-first-and-last-character.cpp
 * @author Ilya Savitsky (ipsavitsky234@gmail.com)
 * @brief https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
 * @version 0.1
 * @date 2023-04-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <string>

std::string sliceString(std::string str) {
    return std::string(std::next(str.begin()), std::prev(str.end()));
}