#include "holberton.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(int)
{
	for (int h = 0; h < 9; h++)
	{
	for (int m = 0; m <= 9; m++)
	{
		_putchar(h * m + ' ');
	}
	return ('\n');
	}
}
