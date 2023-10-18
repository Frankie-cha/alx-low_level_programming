#include "main.h"
/**
 * cap_string -  function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: str
 */
char *cap_string(char *str)
{
int Index;
while (str[Index])
{
while (!(str[Index] >= 'a' && str[Index] <= 'z'))
Index++;
if (str[Index] - 1 == ' ' ||
str[Index] - 1 == '\t' ||
str[Index] - 1 == '\n' ||
str[Index] - 1 == ',' ||
str[Index] - 1 == ';' ||
str[Index] - 1 == '.' ||
str[Index] - 1 == '!' ||
str[Index] - 1 == '?' ||
str[Index] - 1 == '"' ||
str[Index] - 1 == ')' ||
str[Index] - 1 == '(' ||
str[Index] - 1 == '{' ||
str[Index] - 1 == '}' ||
Index == 0)
str[Index] -= 32;
Index++;
}
return (str);
}
