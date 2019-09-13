#include "lists.h"
/**
  * dlistint_len - calculates number of elements in list
  *@h: head of list
  *Return: number of elements in list
  **/
size_t dlistint_len(const dlistint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (dlistint_len(h->next) + 1);
	return (1);
}
