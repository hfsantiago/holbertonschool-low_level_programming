#include "holberton.h"
/**
 *set_bit - function that sets the value of a bit to 1.
 *@n: number.
 *@index: is the index.
 *
 *Return: 1 if it worked, or -1 if an error ocurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux;

	if (index > 64)
	{
		return (-1);
	}
	aux = 1;

	while (index > 0)
	{
		index = index - 1;
		aux = aux * 2;
	}
	*n = *n + aux;
	return (1);
}
