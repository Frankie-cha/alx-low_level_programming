#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: byte to memory area
 * @src: byte from memory area
 * @n: copied function
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
