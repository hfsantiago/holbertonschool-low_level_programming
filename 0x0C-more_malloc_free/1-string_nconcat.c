#include "holberton.h"
/**
 * string_nconcat - concatenate 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if fail, else pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ptr;

	l = 0;
	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (i = 0 ; s1[i] != 0 ; i++)
		;

	for (j = 0 ; s2[j] != 0 ; j++)
		;

	if (n >= j)
	{
		n = j;
		ptr = malloc(i + n + 1);
	}
	else
		ptr = malloc(i + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (k = 0 ; k < i ; k++)
		ptr[k] = s1[k];

	for (; k < (i + n) ; k++, l++)
		ptr[k] = s2[l];

	ptr[i + n] = 0;
	return (ptr);
}
