#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and set its elements to zero
 * @nmemb: number of elements in the array
 * @size: size of each element, in bytes
 *
 * Return: On success, a pointer to the newly allocated memory. On failure,
 *         NULL is returned.
 *
 * Description: This function allocates enough memory to fit an array of
 * nmemb elements of size bytes each, and sets all the bits to zero. It is
 * equivalent to calling `malloc(nmemb * size)` and then initializing each
 * element to 0, but it uses less memory if the memory allocator is smart
 * enough to give out zeroed memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)arr + i) = 0;
	return (arr);
}
