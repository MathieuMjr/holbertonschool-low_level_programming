#include "function_pointers.h"

/**
 * int_index - function that search an int and gives
 * index of the first result
 * You can choose your way to comparise
 * absolute, strictly positive, or equal to
 * @array: array of numbers to search in
 * @size: size of the array
 * @cmp: a function to compare the number you are looking
 * for, to those in the array
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp(array[0]) == 1)
	{
		return (0);
	}

	else
	{
		for (i = 1; i < size; ++i)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
		}
	}
		return (-1);
}
