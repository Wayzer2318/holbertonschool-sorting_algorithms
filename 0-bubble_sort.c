#include "sort.h"
/**
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 1;
	int temp = 0;

	while(array[i] > array[j])
	{
		while(i < size)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		i++;
		j++;
		}	
	}
}
