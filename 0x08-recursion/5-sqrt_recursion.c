#include "main.h"
/**
 * helperfunction - checks if sqrt  of number exists
 * @num: num
 * @pSqrt: possible sqrt of number
 * Return: sqrt of number ot -1 for error
 */
int helperfunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperfunction(num, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion -  natural square root of a number
 * @n: squarerot number
 * Return: -1 if n < 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
}
