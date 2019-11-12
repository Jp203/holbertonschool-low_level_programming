#include "lists.h"
/**
  * dlistint_len - calculates number of elements in list
  *@h: head of list
  *Return: number of elements in list
  **/
size_t dlistint_len(const dlistint_t *h)
{
    int j = 0;

	if (h == NULL)
		return (0);

	while (h)
    {
        h = h->next;
        j++
    }
	return (j);
}
