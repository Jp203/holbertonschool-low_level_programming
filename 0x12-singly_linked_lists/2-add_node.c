#include "lists.h"


/**
  * add_node - adds a new node at the beginning of a list_t list
  * @head: address of the pointer to the beginning of a list_t list
  * need a double pointer because we can only permanently change
  * the dereferenced value of the double pointer!
  * @str: string to be duplicated
  * Return: pointer to the beginning of the list_t list
  */
list_t *add_node(list_t **head, const char *str)
{
	char *storage;
	list_t *block;

	storage = strdup(str);
	if (storage == NULL)
		return (NULL);
	block = malloc(sizeof(list_t));
	if (block == NULL)
		return (NULL);

	block->str = storage;
	block->len = _str_len(storage);
	block->next = *head;
	(*head) = block;

	return (*head);
}

/**
  * _str_len - counts the number of characters in a string
  * @str: string to be counted
  * Return: number of characters in the string
  */
unsigned int _str_len(char *str)
{
	unsigned int num_char;

	num_char = 0;
	while (str[num_char] != '\0' && str != NULL)
		num_char++;
	return (num_char);
}
