#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a linked list
  * @head: pointer to the head of linked list
  * @index: index of node
  * Return: nth node, NULL if node is non existent
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head != NULL; count++)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
