#include "holberton.h"
/**
 * _isdigit - Writes 1 if c is a digit
 * @c: The number variable to get at value
 *
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
