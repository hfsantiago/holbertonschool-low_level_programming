#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - func create an array of chars, initialized w/ specific char
 * @size: size of the array
 * @c: starting character
 * Return: pointer to array, ar_ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ar_ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ar_ptr = malloc(size + 1 * sizeof(c));
	}
	for (i = 0; i < size; i++)
		*(ar_ptr + i) = c;
	//*(ar ptr + i) = 0;
	return (ar_ptr);
}

