#include "lists.h"
#include <stdio.h>
/**
  *print_dlistint - prints all elements of a doubly linked list
  *@h: linked list head
  *Return: number of nodes in list
  **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	/* must be while loop to continue checking */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
