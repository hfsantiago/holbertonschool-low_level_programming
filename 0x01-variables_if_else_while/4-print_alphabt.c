#include <stdio.h>
/*
* main - Entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
char sort

for (sort = 'a'; sort <= 'z'; sort++)
{
if (sort != 'e' && sort != 'q')
putchar(sort);
}
putchar('\n');
return (0);
}
