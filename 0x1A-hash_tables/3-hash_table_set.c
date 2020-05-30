#include "hash_tables.h"
/**
 *hash_table_set - adds element to the hash table
 *@ht: update key-value
 *@key: is the key
 *@value: value associated with key
 *Return: 1 is succeded or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *i, *new;
	size_t index;

	if (!key || !value || !ht)
	{
		return (0);
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	for (i = ht->array[index]; i != NULL; i = i->next)
	{
		if (strcmp(i->key, key) == 0)
		{
			if (i->value)
			{
				free(i->value);
			}
			i->value = strdup(value);
			free(new);
			return (1);
		}
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
