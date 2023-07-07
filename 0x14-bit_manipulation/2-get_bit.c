#include <stdio.h>
#include "main.h"
/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the number
 * @index: index of the bit you want
 * Return: value of the bit or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue = 0;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;
	return (bitValue);

}
