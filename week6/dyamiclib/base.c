#include <time.h>
#include <stdio.h>
#include <stdlib.h>
void urand(int *arr, int n)
{
	int i, j;

	srand((int)time(0));
	for(i = 0; i < n; i++)
	{
		arr[i] = 1 + (int)(100.0 * rand() / (RAND_MAX+1.0));
	}

	return;
}

void show(int* arr, int len)
{
	int i;

	for(i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	return;
}
