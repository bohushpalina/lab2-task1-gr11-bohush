/* Author: Bohush Palina, group 11a */

/*
 * digit_sum.c
 * Implementation of digit sum calculation function.
 */

#include "digit_sum.h"

/*
 * Function: digit_sum
 * -------------------
 * Calculates sum of digits of a number.
 */

int digit_sum(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
