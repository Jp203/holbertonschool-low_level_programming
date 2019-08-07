#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - frees allocated memory of a listint_t list
  * @head: pointer to beginning of list
  */
void free_listint(listint_t *head)
{
	listint_t *hold;

	/* check for input */
	while (head)
	{
		/* free then direct head to next element */
		hold = head->next;
		free(head);
		head = hold;
	}
}
