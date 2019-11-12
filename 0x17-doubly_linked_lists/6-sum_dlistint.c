#include "lists.h"
/**
 * sum_dlistint - calculate sum of all values in list
 * @head: ptr to head
 * Return: sum of values
 */
int sum_dlistint(dlistint_t *head)
{
        int sum = 0;
        dlistint_t *hold = head;

        while (hold != NULL)
        {
                sum += hold->n;
                hold = hold->next;
        }
        return (sum);
}
