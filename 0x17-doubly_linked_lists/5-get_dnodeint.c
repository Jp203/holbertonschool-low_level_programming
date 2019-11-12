#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node dll
 * @head: ptr to head
 * @index: index to find
 * Return: ptr to nth index node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        unsigned int count = 0;
        dlistint_t *hold = head;

        while (hold != NULL)
        {
            if (count == index)
                    return (hold);
            hold = hold->next;
            count++;
        }
        return (NULL);
}
