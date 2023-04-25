#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order
 * @list: pointer to  a pointer to head of the list
 * Return: void.
 **/
void insertion_sort_list(listint_t **list)
{
	if (!list || !*list || !(*list)->next)
		return;

	listint_t *curr = (*list)->next;

	while (curr != NULL)
	{
		listint_t *tmp = curr->next;

		while (curr->prev != NULL && curr->n < curr->prev->n)
		{
			listint_t *prev = curr->prev;

			prev->next = curr->next;
			if (curr->next != NULL)
				curr->next->prev = prev;
			curr->prev = prev->prev;
			curr->next = prev;
			prev->prev = curr;
			if (curr->prev == NULL)
				*list = curr;
			else
				curr->prev->next = curr;

			print_list(*list);
		}
		curr = tmp;
	}
}
