#include "holberton.h"
/**
 * times_table - writes the multiply table 9 times 0-9
 */
void times_table(void)
{
	int i, times, multiply;

	for (i = 0; i <= 9; i++)
	{
		for (times = 0; times <= 9; times++)
		{
			multiply = times * i;
			if ((multiply) >= 1 && (multiply) <= 9)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
				_putchar(multiply + '0');
			}
			else if ((multiply) > 9)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(multiply / 10 + '0');
				_putchar(multiply % 10 + '0');
			}
			else if ((multiply) == 0 && times == 0)
			{
				_putchar(multiply + '0');
}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multiply + '0');
}
		}
		_putchar('\n');
	}

}
