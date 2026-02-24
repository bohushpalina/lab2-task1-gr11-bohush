/* hello.c */
#include <stdio.h>

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

void main (int argc, char* argv[])
{
	if (argc != 2)
		{
			print("Not enough arguements\n");
			return 1;
		}
	int n = atoi(argv[1]);
	int array[n];
  srand(time(NULL));
	
	printf("Generated array:\n");
  for (int i = 0; i < n; i++)
  {
    array[i] = rand() % 1000 + 1;
    printf("%d ", array[i]);
  }
	printf("\n");

	int max_sum = digit_sum(array[0]);
	for (int i = 1; i < n; i++)
  {
    int current_sum = digit_sum(array[i]);

    if (current_sum > max_sum)
    {
      max_sum = current_sum;
    }
  }

	printf("Numbers with maximum digit sum (%d):\n", max_sum);
  for (int i = 0; i < n; i++)
  {
    if (digit_sum(array[i]) == max_sum)
    {
      printf("%d ", array[i]);
    }
  }
  printf("\n");

  return 0;
}
