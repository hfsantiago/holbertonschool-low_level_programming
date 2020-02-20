#include "holberton.h"

/**
 *_strncpy - function that copies a string exactly like strncpy
 *
 * @dest: destination
 * @src: Source
 * @n: number of characters to be copied
 *
 * Return: first string (destination)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int h;

	h = 0;

	for (h = 0; h < n && src[h] != '\0'; h++)
	{
		dest[h] = src[h];
	}
	while (h < n)
	{
		dest[h] = '\0';
		h++;
	}

	return (dest);
}
