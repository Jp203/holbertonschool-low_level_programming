#include "lists.h"

/**
  * print_listint_safe - prints a linked list
  * @head: pointer to head of linked list
  * Return: number of nodes in the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes, index;
	const listint_t *head_static, *head_track;

	if (head == NULL)
		return (0);
	head_static = head;
	for (num_nodes = 0; head != NULL; num_nodes++)
	{
		head_track = head_static;
		for (index = 0; index < num_nodes; index++)
		{
			if (head_track == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (num_nodes);
			}
			head_track = head_track->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (num_nodes);
}
