#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array given number of elements and size
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Null if error, else pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < (nmemb * size) ; i++)
		ptr[i] = 0;

	return (ptr);
}
