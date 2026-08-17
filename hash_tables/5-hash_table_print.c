#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to print
 *
 * Description: Prints the key/value pairs in the order they appear
 *              in the array and its linked lists.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep;

	if (ht == NULL)
		return;

	printf("{");
	i = 0;
	sep = "";
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
