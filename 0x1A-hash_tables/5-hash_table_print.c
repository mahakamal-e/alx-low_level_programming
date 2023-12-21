#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp_node;
	int printed_data = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp_node = ht->array[i];
		while (temp_node != NULL)
		{
			if (printed_data == 1)
				printf(", ");
			printf("'%s': '%s'", temp_node->key, temp_node->value);
			printed_data = 1;
			temp_node = temp_node->next;
		}
	}
		printf("}\n");
}
