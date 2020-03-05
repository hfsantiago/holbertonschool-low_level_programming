#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; min <= max ; i++, min++)
		ptr[i] = min;

	return (ptr);
}
