#include "sort.h"

/**
  *bubble_sort - sorts an array of integers in ascending order
  *from smallest to largest using bubble sort algorithm
  *@array: an array of integers
  *@size: the size of the array
  */


void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t swap;
	int temp;

	if (array == NULL)
		return;

	swap = 1;
	while (swap)
	{
		swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				swap = 1;
				print_array(array, size);
			}
		}

	}
}
