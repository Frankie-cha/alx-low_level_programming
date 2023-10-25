#include "main.h"
/**
 * _length - check the length of a string
 * @s: string
 * Return: length of string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp  - checks if the string is palindrome
 * @i: index
 * @lg: length of the string
 * @s: string
 * Return: 1 or 0
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

