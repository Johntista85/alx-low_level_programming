#include "search_algos.h"
/**
 * linear_search - search lnear form in array for element
 * @array: array list
 * @size: size of the array
 * @value: value of the array
 *
 * Return: index where user looks for
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	if (array == NULL)
		return (-1);

	for (; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	} return (-1);
}
