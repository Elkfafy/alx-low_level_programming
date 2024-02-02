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
	hash_node_t *current;
	    hash_table_t *ht;

	        ht = hash_table_create(1);
		    hash_table_set(ht, "second betty", "cool");
		    hash_table_set(ht, "third", "soma");
		    hash_table_set(ht, "second", "ahmed");
		    hash_table_set(ht, "second betty", "sheks");
		    hash_table_set(ht, "second", "eslam");

		    hash_table_set(ht, "third", "2ho");
		    
		    current = ht->array[0];
		    while (current != NULL)
		    {
		    	printf("%s, %s\n", current->key, current->value);
		    	current = current->next;
		}
		    printf("%p, %s\n", (void *) ht->array[0]->next->next, ht->array[0]->next->value);
		        return (EXIT_SUCCESS);
}
