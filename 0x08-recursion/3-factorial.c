#include "holberton.h"

/**
 * factorial - returns the factorial of a given number.
 *@n: number.
 * Return: the factorial of n.
 * if n is lower than 0 return -1.
 * factorial of 0 is 1.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
