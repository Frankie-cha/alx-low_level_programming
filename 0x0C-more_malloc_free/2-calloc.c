#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: array
 * @size: pointer to allocate memory
 * Return: NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
