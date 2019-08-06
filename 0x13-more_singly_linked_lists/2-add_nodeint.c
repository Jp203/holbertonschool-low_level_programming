#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
  * add_nodeint - adds new node to beginning of a listint_t list
  * @head: a pointer to the beginning index of list
  * @n: int value to be added to list
  * Return: address of new element, Null if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new1;
	/* allocate new node */
	new1 = malloc(sizeof(listint_t));
	/* NULL check */
	if (new1 == NULL)
		return (NULL);
	/* insert new node */
	new1->n = n;
	/* make next of new node be head */
	new1->next = *head;
	/*  make head point to new node */
	*head = new1;
	return (*head);
}
