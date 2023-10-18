#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: input value
 * @n: number
 * Return: void
 */
void reverse_array(int *a, int n)
{
int j;
int k;
for (j = 0; j < n--; j++)
{
k = j[a];
a[j] = a[n];
a[n] = k;
}
}
