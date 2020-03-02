#include<stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Quantity of arguments in cl.
 * @argv: Arguments with size argc.
 *
 * Return: returns arguments.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
