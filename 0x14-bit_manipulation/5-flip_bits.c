#include "holberton.h"

/**
 * flip_bits - Number of bits to flip for change a number.
 * @n: Number root.
 * @m: Number to change to.
 *
 * Return: Numbers to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int swap = n ^ m;
	unsigned int flips;

	for (flips = 0; swap; swap >>= 1)
		flips += (swap & 1);

	return (flips);
}
