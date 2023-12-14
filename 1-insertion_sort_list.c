#include "sort.h"

/**
 * insertion_sort_list - sorts DLL in ascending order using the Insertion sort
 * @list: list to be sorted
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *temp, *temp_prev, *temp_next;

	if (!list || !(*list) || !((*list)->next))
		return;

	while (current)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			temp_prev = temp->prev;
			temp_next = temp->next;

			temp->prev = temp_prev->prev;
			temp->next = temp_prev;

			if (temp_prev->prev)
				temp_prev->prev->next = temp;
			temp_prev->prev = temp;

			if (temp_next)
				temp_next->prev = temp_prev;

			temp_prev->next = temp_next;

			if (!temp->prev)
				*list = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
