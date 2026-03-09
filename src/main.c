/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "digit_sum.h"

int main(int argc, char *argv[])
{
        int             n;                      /* Size of the array                */
        int             max_sum;                /* Maximum digit sum found          */
        int             *array;                 /* Pointer to dynamically allocated */

        if (argc != 2) {
                printf("Usage: %s array_size\n", argv[0]);
                return 1;
        }

        n = atoi(argv[1]);

        if (n <= 0) {
                printf("Array size must be positive\n");
                return 1;
        }

        array = (int *)malloc(n * sizeof(int));
        if (array == NULL) {
                printf("Memory allocation failed\n");
                return 1;
        }

        srand(time(NULL));

        generate_array(array, n);

        print_array(array, n);

        max_sum = find_max_digit_sum(array, n);

        print_numbers_with_max_sum(array, n, max_sum);

        free(array);

        return 0;
}
