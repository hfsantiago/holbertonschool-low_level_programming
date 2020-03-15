#include "variadic_functions.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
  * print_char - print char
  * @str: string pointer
  * @valist: takes in a list
  */
void print_char(char *str, va_list valist)
{
	printf("%s%c", str, va_arg(valist, int));
}
/**
  * print_int - print int
  * @str: string pointer
  * @valist: takes in a list
  */
void print_int(char *str, va_list valist)
{
	printf("%s%d", str, va_arg(valist, int));
}
/**
  * print_float - print float
  * @str: string pointer
  * @valist: takes in a list
  */
void print_float(char *str, va_list valist)
{
	printf("%s%f", str, va_arg(valist, double));
}
/**
  * print_string - print a string
  * @str: string pointer
  * @valist: takes in a list
  */
void print_string(char *str, va_list valist)
{
	char *temp;

	temp = va_arg(valist, char *);
	if (temp == NULL)
		temp = "(nil)";
	printf("%s%s", str, temp);
}
/**
  * print_all - prints everything
  * @format: takes in a format
  */
void print_all(const char * const format, ...)
{
	va_list valist;

	int i, j;

	char *str;

	p_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(valist, format);
	str = "";
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		for (j = 0; p[j].c != NULL; j++)
		{
			if (format[i] == p[j].c[0])
			{
				p[j].f(str, valist);
				str = ", ";
			}
		}
	}
	printf("\n");
	va_end(valist);
}
