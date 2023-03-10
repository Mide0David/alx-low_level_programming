#include "main.h"

/**
 * _strlen - count the number of char in string
 * @s: the string to be used in function
 * Return: return the string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
