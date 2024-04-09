#include "sort.h"

/**
*bubble_sort - the Bubble sort algorithm
*@array: array;
*@size: size;
*
* Return: void;
*/

void bubble_sort(int *array, size_t size)
{
	int aux;
	size_t i, j;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)/* ordenar todos los valores */
	{
		for (j = 0; j < size - 1; j++)/* para cambiar valores */
		{
			/* comparar y cambiar los valores */
			if (array[j] > array[j + 1])
			{
				/* guardamos j, cambiamos j por j + 1, j+ 1 = aux */
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;

				print_array(array, size);
			}
		}
	}
}
