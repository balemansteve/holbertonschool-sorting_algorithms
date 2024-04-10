#include "sort.h"

/**
*insertion_sort_list -  Insertion sort algorithm
*@list: lista a ordenar
*
*Return: void;
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *node, *pos;

	if (!list || !*list)
		return;

	aux = *list;

	while (aux)
	{
		node = aux;
		while (node->prev && (node->n < node->prev->n))
		{
			pos = node->prev;

			if (node->next)
				node->next->prev = pos;

			if (pos->prev)
				pos->prev->next = node;

			else
				*list = node;

			pos->next = node->next;
			node->prev = pos->prev;
			node->next = pos;
			pos->prev = node;

			print_list(*list);
		}

		aux = aux->next;
	}
}
