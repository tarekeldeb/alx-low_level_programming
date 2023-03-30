#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (len1 == len2)
	{
		return (0);
	}
	else if (len1 < len2)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
