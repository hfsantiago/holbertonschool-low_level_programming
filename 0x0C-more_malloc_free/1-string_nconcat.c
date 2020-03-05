#include "holberton.h"
/**
 * string_nconcat - Concatenates two strings.
 * @s1: First String.
 * @s2: Second String.
 * @n: Bytes to show in screen.
 *
 * Return: Return both strings concatenated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	(s1 == NULL ? s1 = "" : 0);
	(s2 == NULL ? s2 = "" : 0);

	for (i = 0; *(s1 + i) != '\0'; i++)
		;

	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	(n >= j ? n = j : n);

	str = malloc(1 + (i + n) * sizeof(*str));

	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; j < n; j++, i++)
		*(str + i) = *(s2 + j);

	*(str + i) = '\0';

	return (str);
}
