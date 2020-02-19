#include "holberton.h"
/**
 * isnum - checks if this variable is a number.
 * @a: variables num
 *
 * Return: returns (1) if it's true
 */
int isnum(int a)
{
	return (a >= '0' && a <= '9');
}

/**
 * _atoi - converts from string to integer.
 * @s: pointer string.
 * Return: the number that was converted.
 */
int _atoi(char *s)
{
	unsigned int res, i;

	int sign;

	sign = 1;
	res = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (isnum(s[i]))
		{
			res = (res * 10 + s[i] - '0');
			if (s[i + 1] == ' ')
				break;
		}
	}
	return (res * sign);
}
