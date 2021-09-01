#include "main.h"
/**
 * print_last_digit - a function returns the last digit from a number.
 * @n: the number which contains the last digit
 * Return: return the value of the last digit 
 */
int print_last_digit(int n)
{
	int m;
	m = (n % 10);
	
	if (m < 0)
	{
		m = (-1 * m);
	}
	
	_putchar(m + '0');
	return (m);	
}

