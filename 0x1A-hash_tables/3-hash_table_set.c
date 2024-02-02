#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 * @ht: input hash table
 * @key: input key
 * @value: input value
 * Return: status
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index((const unsigned char *) key, ht->size);
	char *my_value, *my_key;
	hash_node_t *current;

	my_value = strdup(value);
	if (value == NULL)
		return (0);
	my_key = strdup(key);
	if (key == NULL)
	{
		free(my_value);
		return (0);
	}
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
	{
		free(my_value);
		free(my_key);
		return (0);
	}
	current->key = my_key;
	current->value = my_value;
	if (ht->array[index] == NULL)
		current->next = NULL;
	else
		current->next = ht->array[index]->next;
	ht->array[index] = current;
	return (1);
}
