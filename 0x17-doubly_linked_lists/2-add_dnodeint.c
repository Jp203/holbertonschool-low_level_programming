#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: ptr to head of list.
 * @n: int in the new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newest_node = malloc(sizeof(dlistint_t));

    if (newest_node)
    {
        newest_node->n = n;
        newest_node->prev = NULL;
        newest_node->next = *head; /* new -> points to prev */
        if (*head)
            (*head)->prev = newest_node; /* prev -> new */
        *head = newest_node;
    }
    return (newest_node);
}
