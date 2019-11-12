#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: ptr to head
 * @index: index of node to delete
 * Return: 1 if success, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int count = 0;
    dlistint_t *hold, *trash;

    hold = *head;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = hold->next;
        free(hold);
        return (1);
    }

    for (count = 0; count < index - 1 && hold; count++)
        hold = hold->next;

    if (hold->next == NULL || hold == NULL)
        return (-1);

    trash = hold->next;
    hold->next = trash->next;
    free(trash);
    return (1);
}
