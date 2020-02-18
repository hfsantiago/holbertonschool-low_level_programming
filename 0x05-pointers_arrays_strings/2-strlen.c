#include "holberton.h"
/**
 * _strlen - return length of a string.
 * @s: variable for function _strlen.
 * Return: returns the final value of c.
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (*(s) != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
