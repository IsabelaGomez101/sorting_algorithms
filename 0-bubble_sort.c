#include "sort.h"

/**
 * bubble_sort - function that sorts an array of
 * integers in ascending order using the Bubble sort algorithm
 * @array: array.
 * @size: size of array.
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, aux = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/*swap elements*/
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
