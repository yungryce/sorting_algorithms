#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order using Bubble sort algorithm
 * @array: arrat to be sorted
 * @size: size of array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t a, i, j;
	size_t n = size;
	int temp;

	for (a = 0; a < size; a++)
	{
		for (i = 0; i < size - 1; i++)
		{
			j = i + 1;
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
		n -= 1;
	}
}

