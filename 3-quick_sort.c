#include "sort.h"

void quicksort_lomuto(int *array, int left, int right, size_t size);
int partitionLomuto(int *array, int left, int right, size_t size);

/**
 * partitionLomuto - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array.
 * @left: index of the first element.
 * @right: index of the last element.
 * @size: size of array.
 * Return: index
 */

int partitionLomuto(int *array, int left, int right, size_t size)
{
	int i = left - 1, j = 0, aux = 0;
	int pivot = right;
	/*Lomuto algorithm always uses the last element, for the pivot.*/

	for (j = left; j < right; j++)
	{
		if (array[j] <= array[pivot])
		{
			i++;
			if (i != j)
			{
			aux = array[j];
			array[j] = array[i];
			array[i] = aux;
			print_array(array, size);
			}
		}
	}
	if (array[pivot] < array[i + 1])
	{
	aux = array[i + 1];
	array[i + 1] = array[right];
	array[right] = aux;
	print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort_lomuto - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array.
 * @left: index of the first element.
 * @right: index of the last element.
 * @size: size of array.
 * Return: void.
 */
void quicksort_lomuto(int *array, int left, int right, size_t size)
{
	size_t index = partitionLomuto(array, left, right, size);

	if (left < right)
	{
	if (index > 0)
		quicksort_lomuto(array, left, index - 1, size);
	if (index != size)
		quicksort_lomuto(array, index + 1, right, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array.
 * @size: size of array.
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	int left = 0, right = size - 1;

	if (array != NULL && size != 0)
	quicksort_lomuto(array, left, right, size);
}
