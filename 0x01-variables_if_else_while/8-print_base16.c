#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char letter;

	for (d = '0'; d <= '9'; d++)
	putchar (d);
	for (letter = 'a'; letter <= 'f'; letter++)
	putchar(letter);
	putchar('\n');

	return (0);
}
