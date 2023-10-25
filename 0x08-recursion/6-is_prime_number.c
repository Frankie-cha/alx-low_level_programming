#include "main.h"
/**
  *helperFuntion - returns 0 or 1
  *@num: number being checked
  *@i: factor of the number
  *Return: 1 if integer prime number if not 0
  */
int helperfunction(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (helperfunction(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - input integer is a prime number or not
  *@n: integer value
  *Return: 1 if integer is prime number otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperfunction(n, 2));
	}
}
