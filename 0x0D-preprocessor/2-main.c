#include <stdlib.h>
/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char *file = __FILE__;
	char *ptr = file;

	while (*p != '\0')
		p++;
	while (*p != '/' && *p != file)
		p--;
	if (*p == '/')
		p++;
	while (*p != '/0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	retuen (0);
	
}
