#include "sort.h"

/**
*swap - intercambia dos elementos del array
*@i: primer elemento;
*@j: segundo elemento;
*
*Return: void, solo cambia;
*/

void swap(int *i, int *j)
{
	int aux;

	aux = *i;
	*i = *j;
	*j = aux;
}

/**
 *div - se encarga de ordenar los elementos y modificar el pivote
 *@array: array a ordenar;
 *@min: primer elemento;
 *@ant: ultimo elemento;
 *@size: tamanio del arreglo
 *
 * Return: nuevo pivote
 */

int div(int *array, int min, int ant, size_t size)
{
	int pivote = array[ant];
	int i = min;
	int j;

	for (j = min; j < ant; j++)
	{
		if (array[j] <= pivote)
		{


			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != j)
	{
		swap(&array[i], &array[ant]);
		print_array(array, size);
	}

	return (i);

}

/**
 *quick_sort_recurs - funcion para sub dividir el array;
 *@array: arreglo;
 *@min: primer elemento;
 *@ant: ultimo elemento;
 *@size: tamanio
 *
 * Return: void;
 */

void quick_sort_recurs(int *array, int min, int ant, size_t size)
{
	int pivote;

	if (min < ant)
	{
		pivote = div(array, min, ant, size);

		quick_sort_recurs(array, min, pivote - 1, size);
		quick_sort_recurs(array, pivote + 1, ant, size);
	}
}

/**
*quick_sort - quick_sort algorithm
*@array: array a ordenar;
*@size: tamanio del array
*
*Return: void, ordena y imprime;
*/

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quick_sort_recurs(array, 0, size - 1, size);
}
