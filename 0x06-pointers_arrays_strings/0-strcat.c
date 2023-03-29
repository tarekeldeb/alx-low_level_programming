#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int destln = 0;
	int srcln = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destln++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		srcln++;
	}
	for (i = 0; i <= srcln; i++)
	{
		dest[destln + i] = src[i];
	}

	return (dest);
}
