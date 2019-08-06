#include "lists.h"

/**
  * print_listint - print all elements of a listint_t list
  * @h: a pointer to the list to be printed from
  * Return: the number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	/* NULL check */
	if (h == NULL)
		return (0);
	/* traverse thru n & print all elements */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		break;
	}
	/* return # of nodes in the list */
	return (1 + print_listint(h->next));
}
