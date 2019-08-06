#include "lists.h"
/**
  * listint_len - determines number of elements in a linked list
  * @h: a pointer to the list to be used
  * Return: the number of elements in linked list
  */
size_t listint_len(const listint_t *h)
{
	/* NULL check */
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
