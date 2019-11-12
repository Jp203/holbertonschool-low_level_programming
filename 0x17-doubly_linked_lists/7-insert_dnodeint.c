#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at nth position
 * @h: ptr to head
 * @idx: index of new node
 * @n: value of new node
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count = 0;

    dlistint_t *newest, *original;

    newest = malloc(sizeof(dlistint_t));
    if (newest == NULL)
        return (NULL);
    original = *h;
    if (idx == 0)
    {
        newest->n = n;
        newest->prev = NULL;
        newest->next = *h;
        if (*h != NULL)
            (*h)->prev = newest;
        *h = newest;
        return (newest);
    }
    while (original != NULL)
    {
        if (count == idx - 1)
        {
            newest->n = n;
            newest->next = original->next;
            original->next = newest;
            newest->prev = original;
            if (newest->next != NULL)
                newest->next->prev = newest;
            return (newest);
        }
        original = original->next;
        count++;
    }
    free(newest);
    return (NULL);
}
