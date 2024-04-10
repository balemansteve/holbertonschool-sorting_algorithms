#include "sort.h"

/**
*selection_sort - selection sort algorithm
*@array: array;
*@size: size;
*
*Return: void;
*/

void selection_sort(int *array, size_t size)
{

	size_t i, j, pos, aux;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		pos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[pos])
			{
				pos = i;
			}
		}

		if (i != pos)
		{
			/*cambiar*/
			aux = array[i];
			array[i] = array[pos];
			array[pos] = aux;

		}
	}
}
