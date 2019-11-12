#include "lists.h"
/**
 * free_dlistint - frees a dll
 * @head: ptr to head 
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *hold;

    while (head != NULL)
    {
        hold = head;
        head = head->next;
        free(hold);
    }
}
