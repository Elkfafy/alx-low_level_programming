#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	    hash_table_t *ht;

	        ht = hash_table_create(1);
		    hash_table_set(ht, "betty", "cool");
		    hash_table_set(ht, "second", "ahmed");
		    printf("%s, %s\n", ht->array[0]->key, ht->array[0]->value);
		    printf("%s, %s\n", ht->array[0]->next->key, ht->array[0]->next->value);
		        return (EXIT_SUCCESS);
}
