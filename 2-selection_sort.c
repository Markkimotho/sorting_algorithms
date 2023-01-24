#include "sort.h"

/**
  *selection_sort -  sorts an array of integers in ascending order
  *using the Selection sort algorithm
  *@array: array to be sorted
  *@size: size of array
  */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min;
	int temp;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
