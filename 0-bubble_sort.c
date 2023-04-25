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
	unsigned int i, j;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print the array after each swap */
				print_array(array, size);
			}
		}
	}
}
