/**
 * @file square_sum.c
 * @author Ilya Savitsky (ipsavitsky234@gmail.com)
 * @brief https://www.codewars.com/kata/515e271a311df0350d00000f
 * @version 0.1
 * @date 2023-05-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stddef.h>

int square_sum(const int values[/* count */], size_t count){
	int sum = 0;

    for(int i = 0; i < count; ++i) {
        sum += values[i] * values[i];
    }

    return sum;
}