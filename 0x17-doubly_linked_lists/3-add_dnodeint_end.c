#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of doubly linked list
 * @head: ptr to head of the list
 * @n: new node going into list
 * Return: ptr to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *hold;
    hold = *head;
  
    new_node = malloc(sizeof(dlistint_t));
   
    if (new_node == NULL)
        return (NULL);

    if (*head == NULL)
    {
        new_node->n = n;
        new_node->prev = NULL;
        new_node->next = NULL;
        *head = new_node;
        return (new_node);
    }
    while (hold)
    {
        if (hold->next == NULL)
        {
            new_node->n = n;
            hold->next = new_node;
            new_node->next = NULL;
            new_node->prev = hold;
            return (new_node);
        }
        hold = hold->next;
    }
    return (NULL);
}
