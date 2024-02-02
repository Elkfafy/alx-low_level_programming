#include "hash_tables.h"
/**
 * key_index - get key index
 * @key: input key
 * @size: input size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
