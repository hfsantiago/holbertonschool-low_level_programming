#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Prints strings separated by 'separator'
 * @separator: Strings' Separator.
 * @counter: Last parameter before ellipsis.
 *
 * Return: It returns nothing.
 */
void print_strings(const char *separator, n counter, ...)
{
	int i;
	char *txt;
	va_list ap;

	va_start(ap, counter);

	/* Checks if the separator argument is NULL: */
	if (separator == NULL)
		separator = "";

	/* This variable will be equals to the first argument in variadic function: */
	txt = va_arg(ap, char*);

	/* Travels through each element given: */
	for (i = 0; i < (int)counter; i++)
	{
		printf("%s", (txt != NULL ? (txt) : "(nil)"));
		/* Declare the external variable equals to the next argument: */
		txt = va_arg(ap, char*);
		printf("%s", ((i + 1) != (int)counter ? separator : ""));
	}

	/* Frees AP */
	va_end(ap);

	printf("\n");
}
