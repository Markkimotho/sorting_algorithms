#include "sort.h"

/**
  *find_head - Gets the head of a doubly linked list
  *@temp: node in linked list
  *Return: head of linked list
  */
listint_t *find_head(listint_t *temp)
{
	while (temp->prev)
		temp = temp->prev;

	return (temp);
}

/**
  *insertion_sort_list - Sorts a doubly linked list of integers in
  *in ascending order using insertion algorithm
  *@list: doubly linked list to be sorted
  */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *i;
	listint_t *ptemp;

	if (list == NULL)
		return;
	temp = find_head(*list);

	for (temp = temp->next; temp;)
	{
		i = temp->next;
		while (temp->prev && temp->n < temp->prev->n)
		{
			ptemp = temp->prev;
			ptemp->next = temp->next;
			temp->prev = ptemp->prev;
			ptemp->prev = temp;
			temp->next = ptemp;

			if (ptemp->next)
			{
				ptemp->next->prev = ptemp;
			}
			if (temp->prev)
			{
				temp->prev->next = temp;
			}
			print_list(find_head(*list));
		}
		temp = i;
	}
	*list = find_head(*list);
}
