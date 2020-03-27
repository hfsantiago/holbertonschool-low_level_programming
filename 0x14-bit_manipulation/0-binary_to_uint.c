#include "holberton.h"
/**
  * binary_to_uint - function that converts binary to unsigned int
  * @b: takes in a conts char string
  * Return: the converted unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int counter = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (b[counter] != '\0')
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		decimal <<= 1;
		if (b[counter] == '1')
			decimal ^= 1;
		counter++;
	}
	return (decimal);
}
