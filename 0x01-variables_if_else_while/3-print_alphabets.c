#include <stdio.h>
/**
 * main - Entry point
 * Description -  Program that prints  alphabet in lowercase and  uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char e;

	char f;

	e = 'a';
	f = 'A';
	while
		(e <= 'z') {
			putchar(e);
			e++;
		}
	while
		(f <= 'Z') {
			putchar(f);
			f++;
		}
	putchar('\n');
	return (0);
}

