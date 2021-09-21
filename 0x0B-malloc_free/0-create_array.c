#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - create an arry if size with char c
 * @size: unsigned int type
 * @c: char type
 * return: return pointer to array created
 */

char *create array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
