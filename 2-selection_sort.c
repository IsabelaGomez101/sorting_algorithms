#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: array.
 * @size: size of array.
 * Return: void.
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0; /*variables to iterate*/
	size_t pmin = 0; /*save position*/
	int aux = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++) /*loop array*/
	{
		pmin = i;
		for (j = i + 1; j < size; j++)
		{
			/*if the element is less than the minimum*/
			if (array[j] < array[pmin])
				pmin = j; /*save position of new minimum*/
		}
		if (pmin != i)
		{
			aux = array[i];
			array[i] = array[pmin];
			array[pmin] = aux;
			print_array(array, size);
		}
	}
}
