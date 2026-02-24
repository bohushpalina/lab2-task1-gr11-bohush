/* hello.c */
#include <stdio.h>

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
}
