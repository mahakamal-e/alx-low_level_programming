#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht || !(ht->array) || ht->size == 0)
		return;
	for (i = 0 ; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (ht->array[i] != NULL)
		{
			tmp = tmp->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
	}
	free(ht->array);
	free(ht);
}
