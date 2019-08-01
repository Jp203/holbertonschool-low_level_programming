#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: start of the list
  */
void free_list(list_t *head)
{
	list_t *copy;
	list_t *old;

	copy = head;
	while (copy != NULL)
	{
		free(copy->str);
		old = copy;
		copy = copy->next;
		free(old);
	}
}
