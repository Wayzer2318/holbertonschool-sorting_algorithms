#include "sort.h"
/**
 *
 *
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0;
	int j = 1;
	int temp = 0;

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
