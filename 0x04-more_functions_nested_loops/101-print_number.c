#include "holberton.h"
/**
* print_number - prints every int
* @n: int given
*
* Description: Prints any int using only _putchar
*/

void print_number(int n)
{
int adjust, neg;

neg = 11;

if (n < 0)
{
	_putchar('-');

	if (n < -99)
	{
		neg = n % -10 * -1;
		n = (n / -10);
	}
	else
		n = n * -1;
}

if (n > 9)
{

	adjust = 10;

	while (n / adjust >= 10)
		adjust = adjust * 10;



	_putchar((n / adjust) + '0');

	while (adjust >= 10)
	{
		adjust = adjust / 10;
		_putchar(((n / adjust) % 10)  + '0');
	}

if (neg < 10)
	_putchar(neg + '0');
}

else
	_putchar(n + '0');

}
