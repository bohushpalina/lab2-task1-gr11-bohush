/* Author: Bohush Palina, group 11 */

/*
 * main.c
 * Generates array and finds numbers with maximum digit sum.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "digit_sum.h"

/*
 * Function: generate_array
 * ------------------------
 * Generates array of random natural numbers.
 */

void generate_array(int array[], int size)
{
		for (int i = 0; i < size; i++)
		{
				array[i] = rand() % 1000 + 1;
		}
}

/*
 * Function: print_array
 * ---------------------
 * Prints array elements.
 */

void print_array(const int array[], int size)
{
		printf("Array:\n");
		for (int i = 0; i < size; i++)
		{
				printf("%d ", array[i]);
		}
		printf("\n");
}

/*
 * Function: find_max_digit_sum
 * ----------------------------
 * Finds maximum digit sum in array.
 */

int find_max_digit_sum(const int array[], int size)
{
		int max_sum = digit_sum(array[0]);

		for (int i = 1; i < size; i++)
		{
				int current_sum = digit_sum(array[i]);

				if (current_sum > max_sum)
				{
						max_sum = current_sum;
				}
		}

		return max_sum;
}

/*
 * Function: print_numbers_with_max_sum
 * ------------------------------------
 * Prints numbers with maximum digit sum.
 */

void print_numbers_with_max_sum(const int array[], int size, int max_sum)
{
		printf("Numbers with maximum digit sum (%d):\n", max_sum);
		for (int i = 0; i < size; i++)
		{
				if (digit_sum(array[i]) == max_sum)
				{
						printf("%d ", array[i]);
				}
		}
		printf("\n");
}


int main(int argc, char *argv[])
{
		if (argc != 2)
		{
				printf("Usage: %s array_size\n", argv[0]);
				return 1;
		}

		int n = atoi(argv[1]);
		if (n <= 0)
		{
				printf("Array size must be positive\n");
				return 1;
		}

		int array[n];
	
		srand(time(NULL));
		generate_array(array, n);
		print_array(array, n);

		int max_sum = find_max_digit_sum(array, n);
		print_numbers_with_max_sum(array, n, max_sum);

		return 0;
}
