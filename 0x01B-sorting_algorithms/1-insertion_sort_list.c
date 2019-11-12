#include "sort.h"

/**
 * swap - interchange two nodes in a linked list
 * @list: ptr to doubly linked list
 * @a: ptr to 1st node
 * @b: ptr to 2nd node
 */
void swap(listint_t **list, listint_t *a, listint_t *b)
{
    listint_t *aprev = a->prev;
    listint_t *bnext = b->next;

    if (aprev)
        aprev->next = b;
    if (bnext)
        bnext->prev = a;

    a->prev = b;
    b->prev = aprev;
    a->next = bnext;
    b->next = a;

    if (b->prev == NULL)
        *list = b;
}
/**
 * insertion_sort_list - sort dll using insertion sort
 * @list: ptr to dll
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current;
    listint_t *temp;

    if (list == NULL || *list == NULL)
        return;

    current = *list;
    current = current->next;

    while (current)
    {
        temp = current;
        while (temp)
        {
            if (temp->n > current->n)
            {
                swap(list, temp, current);
                print_list(*list);
            }
            temp = temp->prev;
        }
        current = current->next;
    }

}
