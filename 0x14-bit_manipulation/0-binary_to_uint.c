#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int length = 0;
	unsigned int converted = 0;

	if (b == NULL)
		return (0);
	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}
	for (i = 0; i < length; i++)
	{
		converted = converted * 2 + (b[i] - '0');
	}

	return (converted);
}
