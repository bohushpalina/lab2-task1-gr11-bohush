/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#include <stdio.h>
#include <stdlib.h>
#include "digit_sum.h"

void generate_array(int* array, int size)
{
        int             i;

        for (i = 0; i < size; i++) {
                array[i] = rand() % 1000 + 1;
        }
}

void print_array(const int *array, int size)
{
        int             i;

        printf("Array:\n");

        for (i = 0; i < size; i++) {
                printf("%d ", array[i]);
        }

        printf("\n");
}

int find_max_digit_sum(const int *array, int size)
{
        int             i;
        int             max_sum;                /* Current maximum sum              */
        int             current_sum;            /* Sum of digits for current number */

        max_sum = digit_sum(array[0]);

        for (i = 1; i < size; i++) {
                current_sum = digit_sum(array[i]);

                if (current_sum > max_sum) {
                        max_sum = current_sum;
                }
        }

        return max_sum;
}

void print_numbers_with_max_sum(const int *array, int size, int max_sum)
{
        int             i;

        printf("Numbers with maximum digit sum (%d):\n", max_sum);

        for (i = 0; i < size; i++) {
                if (digit_sum(array[i]) == max_sum) {
                        printf("%d ", array[i]);
                }
        }

        printf("\n");
}

int digit_sum(int number)
{
        int             sum = 0;                /* Accumulated sum of digits        */

        while (number > 0) {
                sum += number % 10;
                number /= 10;
        }

        return sum;
}
