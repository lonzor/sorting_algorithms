#include "sort.h"

/**
 * selection_sort - sorts using the selection sort algorithm
 * @array: array that needs to be sorted
 * @size: size of the array
 **/

void selection_sort(int *array, size_t size)
{
	size_t min, i, k;
	int temp;

	if (array == NULL || size <= 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (k = i + 1; k < size; k++)
		{
			if (array[k] < array[min])
				min = k
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
