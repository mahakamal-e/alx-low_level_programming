#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: hash table.
 * @key: the key.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (!ht || !key || *key == '\0')
		return (NULL);
	idx = hash_djb2((unsigned char *)key) % ht->size;

	current = ht->array[idx];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
