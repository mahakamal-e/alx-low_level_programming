#include "hash_tables.h"

/**
 * shash_table_create - creates table.
 * @size: size of hash table.
 * Return: pointer to hash table that could be created.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	hash_table = malloc(sizeof(shash_table_t));

	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}
/**
 * creat_newNode - function used to creat new node
 * @key: key
 * @value: value
 * Return: pointer to new node null on failure
 */
shash_node_t *creat_newNode(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->snext = NULL;
	new_node->sprev = NULL;

	return (new_node);
}
/**
 * free_ - free a new node
 * @node: node to be free
 */
void free_(shash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
/**
 * sort_hash_table - sort hash table
 * @ht: hash table
 * @node_new: node sorted
 */
void sort_hash_table(shash_table_t *ht, shash_node_t *node_new)
{
	shash_node_t *current;

	if (strcmp(ht->shead->key, node_new->key) > 0)
	{
		node_new->snext = ht->shead;
		ht->shead->sprev = node_new;
		ht->shead = node_new;
		return;
	}

	current = ht->shead;
	while (current && strcmp(current->key, node_new->key) < 0)
	{
		current = current->snext;
	}

	if (current == NULL)
	{
		node_new->snext = NULL;
		node_new->sprev = ht->stail;
		ht->stail->snext = node_new;
		ht->stail = node_new;
		return;
	}

	node_new->snext = current;
	node_new->sprev = current->sprev;
	if (current->sprev != NULL)
		current->sprev->snext = node_new;
	current->sprev = node_new;
}
/**
 * shash_table_set - insert key/value pair in sorted list.
 * @ht: hash table
 * @key: key
 * @value: value.
 * Return: 1 on success and 0 on failure 
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];
	new_node = creat_newNode(key, value);
	if (!new_node)
		return (0);
	if (!current)
	{
		ht->array[index] = new_node;
		if (!ht->shead && !ht->stail)
		{
			ht->shead = new_node;
			ht->stail = new_node;
			return (1);
		}
		sort_hash_table(ht, new_node);
		return (1);
	}
	while (current)
	{
		if (!strcmp(key, current->key))
		{
			free(current->value);
			current->value = strdup(value);
			free_(new_node);
			return (1);
		}
		current = current->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	sort_hash_table(ht, new_node);
	return (1);
}
/**
 * hash_table_get - get the value that associated with a key.
 * @ht: hash table.
 * @key: key
 * Return: the value or null if failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current = ht->shead;

	if (ht == NULL || key == NULL || ht->shead == NULL)
		return (NULL);

	while (current != NULL && strcmp(key, current->key) > 0)
		current = current->snext;
	if (current != NULL && strcmp(key, current->key) == 0)
		return (current->value);

	return (NULL);
}
/**
 * shash_table_print - print the hash table using the sorted linked list
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = ht->shead;

	if (ht == NULL || ht->shead == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 0;

	if (!ht)
		return;
	current = ht->stail;
	printf("{");
	while (current)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		flag = 1;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table.
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp;
	shash_node_t *current = ht->shead;

	while (current != NULL)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}

