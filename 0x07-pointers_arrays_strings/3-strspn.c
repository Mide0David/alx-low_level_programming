#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:the string to check
 * @accept: the string to compare
 * Return: returns the amount of time accept
 * char are in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k++;
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			break;
		}
	}
	return (k);
}
