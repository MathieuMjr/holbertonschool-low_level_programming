#include "main.h"
#include <stdlib.h>

/**
 * array_range - vreate an array from int min to int max
 * @min: minimum int to start with
 * @max: max int to finish with
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr_int;
	int diff;

	diff = max - min + 1;

	if (diff <= 0)
	{
		return (NULL);
	}
	ptr_int = malloc(diff * sizeof(int));
	if (ptr_int == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < diff; ++i)
	{
		ptr_int[i] = i + min;
	}
	return (ptr_int);
}
