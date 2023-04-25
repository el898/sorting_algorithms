#include "sort.h"



/**
 * bubble_sort - Sorts an array of integers in
 * ascending order using bubble sort
 * algorithm by swapping and rearranging.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 *
 * Return: Always void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n, new_n;
	int swap;

	if (array == NULL || size < 2)
		return;

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (i = 0; i < n - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				/* Swap elements */
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				new_n = i + 1;

				/* Print the array after each swap */
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
