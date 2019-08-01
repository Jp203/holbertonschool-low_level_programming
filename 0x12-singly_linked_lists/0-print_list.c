#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: pointer to the first element of the list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	char *null_input = "(nil)";
	unsigned int null_num = 0;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[%u] %s\n", null_num, null_input);
	else
		printf("[%u] %s\n", h->len, h->str);

	if (h->next != NULL)
		return (1 + print_list(h->next));

	return (1);
}
