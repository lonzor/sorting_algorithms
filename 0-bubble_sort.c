#include "sort.h"

/**
 * bubble_sort - sorting algorithm
 * @array: int array needing to be sorted
 * @size: size of array
 **/


void bubble_sort(int *array, size_t size)
{
	size_t i, k;
	int temp;

	if (array == NULL || size <= 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (k = 0; k < size - i - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
