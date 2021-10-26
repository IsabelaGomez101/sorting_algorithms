#include "sort.h"

/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @array: array.
 * @size: size of array.
 * Return: void.
 */

void shell_sort(int *array, size_t size)
{
	size_t h = 1; /*interval with initial value 1*/
	size_t i = 0, j = 0;
	int aux = 0;

	while (h < size)
	{
	h = h * 3 + 1;
	for (i = h; i < size; i++)
	{
		aux = array[i];
		for (j = i; j >= h && array[j - h] > aux; j -= h)
		{
			array[j] = array[j - h];
		}
		array[j] = aux;
	}
	}
	print_array(array, size);
	for (i = 0; i < size; i++)
	{
		j = i;
		aux = array[i];
		while (j > 0 && (aux < array[j - 1]))
		{
			array[j] = array[j - 1];
			j--;
		}
		array[j] = aux;
	}
	print_array(array, size);
}
