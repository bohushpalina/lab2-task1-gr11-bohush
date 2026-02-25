/*
 * Author:      Bohush Palina
 * Group:       11a
 */

#ifndef DIGIT_SUM_H
#define DIGIT_SUM_H

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

#endif /* DIGIT_SUM_H */
