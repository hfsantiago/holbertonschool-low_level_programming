#include "holberton.h"
/**
 * _abs - Displays absolute of number x
 * @x: The integer to print
 *
 * Return: On success 1.
 */
int _abs(int x)
{
	if (x < 0)
		return ((-1) * x);

	return (x);
}
