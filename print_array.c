#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void print_array(const int *array, size_t size)
{
	size_t p;

	p = 0;
	while (array && i < size)
	{
		if (p > 0)
			printf(", ");
		printf("%d", array[p]);
		++p;
	}
	printf("\n");
}
