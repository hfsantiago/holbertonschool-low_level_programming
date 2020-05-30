#include "hash_tables.h"
/**
 *hash_table_get - value associated with a key
 *@ht: hash table
 *@key: key to search
 *Return: value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	size_t i;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[i]; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
	}
	return (NULL);
}
