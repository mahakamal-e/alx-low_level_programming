#include "hash_tables.h"

/**
 * shash_table_create - creates table.
 * @size: size of hash table.
 * Return: pointer to hash table that could be created.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->sheed = NULL;
	haSh_table->stail = NULL;
}
/**
 *
/**
 * shash_table_set - insert key/value pair in sorted list.
 * @ht: hash table
 * @key: key
 * @value: value.
 * Return: 1 on success and 0 on failure 
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_nod_t *new_node, *current = ht->shead, *prev = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return (1);
	}
	while (current != NULL && strcmp(key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}
	if (prev == NULL)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (current == NULL)
	{
		prev->snext = new_node;
		new_node->sprev = prev;
		ht->stail = new_node;
	}
	else
	{
		 prev->snext = new_node;
		 new_node->sprev = prev;
		 new_node->snext = current;
		 current->sprev = new_node;
	}
	return (1);
}
