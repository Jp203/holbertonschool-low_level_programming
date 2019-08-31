#include "lists.h"

/**
  * free_listint_safe - free a listint_t list
  * @h: ** to list
  * Return: size of list
  */

size_t free_listint_safe(listint_t **h)
{
	size_t node_count, mark;
	listint_t *on_deck, *follow;
	listint_t *static1, *looper;

	if (h == NULL || *h == NULL)
		return (0);

	static1 = *h;
	looper = (listint_t *)&mark;

	for (node_count = 0; *h != NULL; node_count++)
	{
		follow = static1;
		for (mark = 0; mark < node_count; mark++)
		{
			if (follow == *h)
			{
				looper = follow;
				break;
			}
			follow = follow->next;
		}
		if (looper == *h)
			break;
		*h = (*h)->next;
	}
	*h = static1;
	for (mark = 0; mark < node_count; mark++)
	{
		on_deck = (*h)->next;
		free(*h);
		*h = on_deck;
	}
	*h = NULL;
	return (node_count);
}
