#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - sorts an array of int in ascending order
 * @array: array
 * @size: size
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, size_clone = size;
	bool swapped;
	int temp;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < size_clone - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				print_array(array, size);
				swapped = false;
			}
		}

		size_clone--;
	}
}
