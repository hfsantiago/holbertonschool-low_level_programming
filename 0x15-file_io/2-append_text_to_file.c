#include "holberton.h"
/**
 *append_text_to_file - Functions that appends text at the end of a file
 *
 *@filename: filename.
 *@text_content: text content.
 *
 *Return: 1 on success -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int b;

	if (filename == NULL)
	{
		return (-1);
	}
	a = open(filename, O_WRONLY | O_APPEND, 600);

	if (a == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (b = 0; text_content[b] != 0; b++)
		{
		}
		write(a, text_content, b);
	}
	close(a);
	return (1);
}
