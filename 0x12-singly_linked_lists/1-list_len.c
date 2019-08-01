#include "lists.h"

/**
  * list_len - calculates the number of elements in a list
  * @h: pointer to the structure of type list_t
  * Return: number of elements in a linked list_t list
  */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->next != NULL)
		return (1 + list_len(h->next));
	return (1);
}
