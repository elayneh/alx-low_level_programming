#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - ...
 * @s1: the first string to be concatinated
 * @s2: the second string to be concatinated
 * @n: the first n bytes in s2
 *
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= sizeof(s2))
	{
		j = sizeof(s1) + sizeof(s2);
	}
	else
	{
		j = sizeof(s1) + n;
	}

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		if (i <= sizeof(s1))
		{
			str[i] = s1[i];
		}
		if (i >= sizeof(s1))
		{
			str[i] = s2[k];
			k++;
		}
	}
	str[j] = '\0';
	return (str);
}

