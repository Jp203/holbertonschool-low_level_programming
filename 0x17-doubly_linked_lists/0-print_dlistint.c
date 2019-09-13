#include "lists.h"
/**
  *print_dlistint - prints all elements of a doubly linked list
  *@h: linked list head
  *Return: number of nodes in list
  **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *clone;

	if (h == NULL)
		return (nodes);
	/*
	if (h->prev != NULL)
		h = h->prev;
		*/
	clone = h;
	/* must be while loop to continue checking */
	while (clone != NULL)
	{
		nodes += 1;
		printf("%d\n", clone->n);
		clone = clone->next;
	}
	return (nodes);
}
