#include "lists.h"


/**
 * check_cycle: check if there is a cycl within the singly linked list
 * @list: singly linked list
 * Return: 0 is no cycle and 1 yes cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *head;
	listint_t *tail;

	if (list == NULL)
		return (0);

	head = list;
	tail = list;

	while (tail != NULL && tail->next != NULL)
	{
		head = head->next;
		tail = tail->next->next;

		if (head == tail)
			return (1);

	}
	return (0);
}
