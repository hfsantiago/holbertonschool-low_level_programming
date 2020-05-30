#include "hash_tables.h"
/**
 *key_index - index of a key
 *@key: key to get index
 *@size: size of the array
 *Return: key-value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
