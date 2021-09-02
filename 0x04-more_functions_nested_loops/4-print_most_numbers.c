#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{
		if (a != '2')
		{
			if (a != '4')
			{
			_putchar(a);
			}
		}
	}
	_putchar('\n');
}
