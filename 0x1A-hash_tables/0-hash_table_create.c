#include "hash_tables.h"
/**
 * hash_table_create - hash table create
 * @size: input size of array
 * Return: hash table pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *array;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	array = malloc(sizeof(hash_node_t) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->array = &array;
	return (table);
}
