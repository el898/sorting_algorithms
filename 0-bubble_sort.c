#include "sort.h"

/**
 * bubble_sort - Sorts an array of integer by swapping
 * and rearranging in ascending order using bubble 
 * sort algorithma
 *
 * @array: The array to be sorted
 * @size: The size of the array
 * Always Return (void)
 */
void bubble_sort(int *array, size_t size)
{
    unsigned int i, t;
    int swap;


    for (i = 0; i < size - 1; i++)
    {

        for (t = 0; t < size - i - 1; t++)
        {
            if (array[t] > array[t + 1])
            {
                /* this Swaps  elements */
                swap = array[t];
                array[t] = array[t + 1];
                array[t + 1] = swap;

                /* Print the array after each swap */
                print_array(array, size);
            }
        }
    }
}
