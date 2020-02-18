#include "holberton.h"
/**
 * _strcpy - copy strings
 * @dest: destination.
 * @src: source.
 * Return: returns destination.
 */
char *_strcpy(char *dest, char *src)
{
	int _strlen(char *s), i, len;

	len = _strlen(src);

	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	for ( ; i < len; i++)
		*(dest + i) = '\0';

	return (dest);
}
/**
 * _strlen - find the length of a string
 * @s: input string pointer
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
