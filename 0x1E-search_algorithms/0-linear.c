#include "search_algos.h"

/**
 * linear_search - find value in array by using linear search 
 * @array: pointer to the first element in array to be searched
 * @size: size of the array 
 * @value: value to search for
 *
 * Return: first index where value is located or -1 where not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

