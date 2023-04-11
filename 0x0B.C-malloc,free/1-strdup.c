#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
    int len;
    int i;
    char *cpstr;
    
    if (str == NULL)
    {
        return NULL;
    }
    while (str[len] != '\0')
    {
        len++;
    }
    len++;
    cpstr = (char*) malloc(len * sizeof(char));
        if (cpstr == NULL)
    {
        return NULL;
    }
    for (i = 0; i < len; i++)
    {
        cpstr[i] = str[i];
    }
    return (cpstr);
}
