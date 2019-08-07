#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: double pointer to the linked list
  * Return: pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start, *end;

	if (head == NULL || *head == NULL)
		return (NULL);
	start = *head;
	*head = (*head)->next;
	start->next = NULL;

	while (*head != NULL)
	{
		end = (*head)->next;
		(*head)->next = start;
		start = *head;
		*head = end;
	}
	*head = start;
	return (*head);
}
