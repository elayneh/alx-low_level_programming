#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 int main(void)
{
	char *name = "Holberton";

	while (*name)
	{
		putchar(*name);
		name++;
	}
	putchar('\n');

	return (0);
}
