#include "sort.h"

/**
 * insertion_sort_list - sorts using insertion sort
 * @list: list to sort that is doubly linked
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *trav;

	if (list == NULL || (*list)->next == NULL || *list == NULL)
		return;
	trav = (*list)->next;
	while (trav != NULL)
	{
		while (trav->prev != NULL && trav->n < trav->prev->n)
		{
			trav->prev->next = trav->next;
			if (trav->next != NULL)
				trav->next->prev = trav->prev;
			trav->next = trav->prev;
			trav->prev = trav->prev->prev;
			trav->next->prev = trav;
			if (trav->prev == NULL)
				*list = trav;
			else
				trav->prev->next = trav;
			print_list(*list);
		}
		trav = trav->next;
	}
}
