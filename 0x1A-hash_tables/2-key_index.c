#include "hash_tables.h"
/**
 * key-index - Gives you the index of a key
 * @key: the key
 * @size: size of hash table array
 * Return: the index where key-value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}