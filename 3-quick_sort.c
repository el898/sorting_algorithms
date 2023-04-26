#include "sort.h"
#include <stdio.h>

/**
 * partition - selects a pivot and partitions the array into two sub-arrays,
 * one with elements less than or equal to the pivot, and the other with
 * elements greater than the pivot, using the Lomuto scheme.
 * @array: the array to partition
 * @lo: the lowest index of the partition to sort
 * @hi: the highest index of the partition to sort
 * @size: the size of the array
 * Return: the index of the partition
 */

size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t i, j;
	int swap, pivot;

	pivot = array[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap = array[i];
				array[i] = array[j];
				array[j] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[hi] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = swap;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - sorts a partition of an array of integers
 * using the Lomuto scheme.
 * @array: the array to sort
 * @lo: the lowest index of the partition to sort
 * @hi: the highest index of the partition to sort
 * @size: the size of the array
 * Return: void
 */

void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size)
{
	ssize_t pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quicksort(array, lo, pivot - 1, size);
		quicksort(array, pivot + 1, hi, size);

	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick
 * sort algorithm with the Lomuto partition scheme.
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
