#include "main.h"
#include <stdlib.h>
/**
 * create_array -  array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character
 * Return: NULL if size is 0
 * pointer of array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
