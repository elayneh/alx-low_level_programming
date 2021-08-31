#include "main.h"
/**
 *_isalpha - Determine whether an integer is character or not.
 *@c: the number to be checked.
 * Return: 1 if character, o if otherwise.
 */
int _isalpha(int c)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
	{
		_putchar('a');
		return (1);
	}
	else
	{
		return (0);
	}
}
