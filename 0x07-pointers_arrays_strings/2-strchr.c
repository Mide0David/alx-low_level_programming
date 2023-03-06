#include "main.h"

/**
 * _strchr - it return the first occurance of
 * c to the function
 * @s: the string to search for the occurance
 * @c: the charater to search for
 * Return: returns the address of the first occurance
 * and if it is found or null if it is not in the string
 *
 */
char *_strchr(char *s, char c)
{
	int i, j = 0;

	while (*s != 0)
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
