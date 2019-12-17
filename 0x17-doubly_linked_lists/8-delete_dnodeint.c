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
        dlistint_t *hold;
        hold = *head;

        while (hold != NULL)
        {
                if (count == index)
                {
                        if (hold->next)
                                hold->next->prev = hold->prev;
                        if (index > 0)
                                hold->prev->next = hold->next;
                        else if (index == 0)
                        {
                                hold = (*head);
                                (*head) = hold->next;
                        }
                        free(hold);
                        return (1);
                }
                hold = hold->next;
                count++;
        }
        return (-1);
}
