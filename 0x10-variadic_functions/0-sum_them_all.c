#include<stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - esta vaina suma todos los parámetros
*@n: cantidad de números del parámtero
*
*Return: 0
*
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int num;
unsigned int rob;
int count;
va_list parameters;

va_start(parameters, n);
num = 0;

	if (n == 0)
	{	
		return (0);
	}		
		for (rob = 0; rob < n; rob++)
		{		
		count = va_arg(parameters, int);
		num += count;
		}
	va_end(parameters);
	return (num);
	}
