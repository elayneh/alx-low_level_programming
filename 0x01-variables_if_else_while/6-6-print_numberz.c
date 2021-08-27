#include <stdio.h>

/**
 * main: Prints the single digit numbers of base 10
 *
 * Return: Always (Success)
 */

int main(void)
{
	char a;

	for(a = '0'; a <= '9'; a++)
	{
		puchar(a);
	}
	puchar('\n');

	return (0);
}

