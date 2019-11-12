#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: a pointer to the hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    unsigned long int count;

    if (size <= 1)
        return (NULL);
    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);
    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_node_t *) *size);
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return (NULL);
    }
    for (count = 0; count < size; count++)
        hash_table->array[count];
    return (hash_table);
}
