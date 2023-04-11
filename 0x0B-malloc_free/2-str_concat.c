#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int len1 = 0;
	int len2 = 0;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	new_string = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_string[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		new_string[len1 + i] = s2[i];
	}
	new_string[len1 + len2 + 1] = '\0';
	return (new_string);

}
