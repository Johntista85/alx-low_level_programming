#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: The first interger to be swapped.
 * @b: The second interger to be swapped.
 *
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
