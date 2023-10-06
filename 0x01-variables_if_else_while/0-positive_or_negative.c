#include <stdio.h>
/**
 * main - entry point
 * Description - A program that prints variable n is positive or negative
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	if  (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}

	return (0);
}

