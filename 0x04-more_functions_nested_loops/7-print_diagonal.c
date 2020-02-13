#include "holberton.h"
/**
 * print_diagonal - prints slashs
 * @n: Variable n
 */
void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				for (s = 0; s < i; s++)
				{
					_putchar(' ');
}
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
}
