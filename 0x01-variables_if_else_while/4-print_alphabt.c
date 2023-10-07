#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints all program except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 103 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
