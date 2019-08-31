#include "lists.h"

/**
  * find_listint_loop - find address of node in which loop starts
  * @head: * to list
  * Return: address of node 
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first, *last;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first = head->next->next;
	first = head->next;
	while (first != NULL && first->next != NULL)
	{
		if (first == last)
			break;
		first = first->next->next;
		first = last->next;
	}
	if (first != last)
		return (NULL);
	last = head;
	while (first != last)
	{
		first = first->next;
		last = last->next;
	}
	return (first);
}
