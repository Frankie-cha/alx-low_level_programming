#include "main.h"
#include <stdio.h>
/**
 * main -  program that prints its name
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
