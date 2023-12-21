#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;
	unsigned long int i_;

	new_hash_table = malloc(sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash_table->array == NULL)
		return (NULL);

	for (i_ = 0; i_ < size; i_++)
		new_hash_table->array[i_] = NULL;

	new_hash_table->size = size;

	return (new_hash_table);
}
