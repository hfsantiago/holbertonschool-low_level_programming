#include "holberton.h"
/**
  * _puts_recursion - prints string recursively
  * @s: takes in a string
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

