#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: address of the pointer to the node
  * @str: string to be copied over
  * Return: pointer to the new start of the list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *input;
	char *storage;
	list_t *begin;

	storage = strdup(str);
	if (storage == NULL)
		return (NULL);

	input = malloc(sizeof(list_t));
	if (input == NULL)
		return (NULL);
	input->str = storage;
	input->len = _str_len(storage);

	begin = *head;
	while (begin != NULL && begin->next != NULL)
	{
		begin = begin->next;
	}
	if (*head == NULL)
	{
		input->next = *head;
		*head = input;
		return (*head);
	}
	input->next = begin->next;
	begin->next = input;

	return (input);
}
/**
  * _str_len - calculates length of a string
  * @str: string to be checked
  * Return: number of chars
  */
unsigned int _str_len(char *str)
{
	unsigned int num_char;

	num_char = 0;
	while (str[num_char] != '\0')
		num_char++;

	return (num_char);
}
