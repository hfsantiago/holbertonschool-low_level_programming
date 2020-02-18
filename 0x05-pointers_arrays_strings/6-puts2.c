#include "holberton.h"
/**
 * puts2 - prints odd characters.
 * @str: string to print.
 */
void puts2(char *str)
{
	int _strlen(char *s), len, c;

	len = _strlen(str);

	for (c = 0; c < len; c++)
	{
		if ((c % 2) == 0)
			_putchar(*str);

		str++;
	}
	_putchar('\n');
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
	while (*(s) != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
