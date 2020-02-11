#include "holberton.h"
/**
 * _islower - print the text in lowercase
 * @c: The character to print
 *
 * Return: On success 0.
 */
int _islower(int c)
{
	int b;

	for (b = 'a'; b <= 'z'; b++)
		if (c == b)
			return (1);

	return (0);
}
