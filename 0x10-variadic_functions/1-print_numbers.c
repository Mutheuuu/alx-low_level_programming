#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0, i < n, i++)
	{
		printf("%d", va_arg(ptr, int))
			if (separator == NULL)
				;
			else if (i != (n - 1))
				printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}

