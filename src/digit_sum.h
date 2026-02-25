/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

void generate_array(
        int             *array,
        int             size
);

void print_array(
        const int       *array,
        int             size
);

int find_max_digit_sum(
        const int       *array,
        int             size
);

void print_numbers_with_max_sum(
        const int       *array,
        int             size,
        int             max_sum
);

int digit_sum(
        int             number
);

#endif /* ARRAY_UTILS_H */
