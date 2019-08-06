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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
