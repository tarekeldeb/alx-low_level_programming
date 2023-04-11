#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create a duplicate of a string
 * @str: pointer to the string to be duplicated
 * Return: pointer to the newly allocated duplicate string,
 * or NULL if str is NULL
 */
char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *cpstr;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	cpstr = malloc((len + 1) * sizeof(char));
	if (cpstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		cpstr[i] = str[i];
	}
	cpstr[len] = '\0';

	return (cpstr);
}
