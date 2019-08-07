#include "lists.h"

/**
  * pop_listint - deletes head node of listint_t and returns its data
  * @head: double pointer to head of the list
  * Return: head node's data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	/* NULL check */
	if (*head == NULL)
		return (0);

	/* save n */
	n = (*head)->n;

	/* free allocated memory to current element of list */
	hold = (*head)->next;
	free(*head);
	*head = hold;

	return (n);
}
