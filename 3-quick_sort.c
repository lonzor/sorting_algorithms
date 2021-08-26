#include "sort.h"

/**
 * quick_sort - the algorithm
 * @array: array that needs to be sorted
 * @size: size of the array
 **/

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	rec_quick_sort(array, 0, size - 1, size);
}

/**
 * rec_quick_sort - recursive quicksort
 * @array: array that needs to be sorted
 * @begin: the beginning index in the array
 * @end: the ending index in the array
 * @size: size of the array
 **/

void rec_quick_sort(int *array, ssize_t begin, ssize_t end, size_t size)
{
	ssize_t p;

	if (begin < end)
	{
		p = partition(array, begin, end, size);
		rec_quick_sort(array, begin, p - 1, size);
		rec_quick_sort(array, p + 1, end, size);
	}
}

/**
 * partition - splits array into two different ones
 * @array: array that needs to be sorted
 * @begin: the beginning index in an array
 * @end: the ending index in an array
 * @size: size of an array
 * Return: the index of the partition
 **/

ssize_t partition(int *array, ssize_t begin, ssize_t end, size_t size)
{
	ssize_t part_idx, k;
	int pivot;

	part_idx = begin - 1;
	pivot = array[end];
	for (k = begin; k <= end - 1; k++)
	{
		if (array[k] <= pivot)
		{
			part_idx++;
			if (part_idx != k)
			{
				swap(&array[part_idx], &array[k]);
				print_array(array, size);
			}
		}
	}
	if (array[end] < array[part_idx + 1])
	{
		swap(&array[end], &array[part_idx + 1]);
		print_array(array, size);
	}
	return (part_idx + 1);
}

/**
 * swap - swap two ints
 * @num1: - first int to swap
 * @num2: - second int to swap
 **/

void swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
