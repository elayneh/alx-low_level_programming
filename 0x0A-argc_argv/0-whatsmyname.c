#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: number of the arguments
 * @argv: array name
 * return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv[0]);

	return (0);
}
