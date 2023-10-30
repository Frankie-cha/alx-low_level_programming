#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: string pointer NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, a, b;
	char *nstr;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/* check if malloc was successful*/
	if (nstr == NULL)
		return (NULL);

	a = 0;
	while (a < len1)
	{
		nstr[a] = s1[a];
		a++;
	}
	b = 0;
	while (b < size)
	{
		nstr[a] = s2[b];
		a++;
		b++;
	}
	return (nstr);
}
