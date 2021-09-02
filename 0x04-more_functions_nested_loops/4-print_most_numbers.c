#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == '2' || a == '4')
			continue;

			_putchar(a);
	}
	_putchar('\n');
}
