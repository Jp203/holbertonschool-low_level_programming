#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add new node to the end of the list
  * @head: beginning of list
  * @n: int to add to be added to the list
  * Return: pointer to current position in list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;
	/* Allocate memory */
	new = malloc(sizeof(listint_t));
	/* NULL check */
	if (new == NULL)
		return (NULL);
	/* Inserts new node */
	new->n = n;
	/* Directs next of new node to NULL  */
	new->next = NULL;
	/* NULL check */
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	/* Traverses through list until NULL  */
	while (current->next != NULL)
		current = current->next;
	/* Sets new node as last element */
	current->next = new;
	return (*head);
}
