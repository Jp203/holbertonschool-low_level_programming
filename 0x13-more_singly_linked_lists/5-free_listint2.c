#include "lists.h"
#include <stdlib.h>
/**
  * free_listint2 - frees list the set head to NULL
  * @head: double pointer to head index of list
  */
void free_listint2(listint_t **head)
{
	/* hold: stores head to free, live: emulates head */
	listint_t *hold, *live;

	live = *head;

	/* check for input */
	while (live)
	{
		hold = live;
		/* move to next element */
		live = live->next;
		free(hold);
	}
	*head = NULL;
}
