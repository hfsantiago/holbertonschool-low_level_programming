#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
/**
 *struct wrap - it links to a function.
 *@character: a character that represent a type of data.
 *@ptrfunc: pointer to a function
 *
 *Description: struct.
 */
typedef struct wrap
{
	char *character;
	void (*ptrfunc)();
} wrapper;
typedef const unsigned int n;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
