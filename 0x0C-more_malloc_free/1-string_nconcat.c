#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatinates two string together
 * @s1: the destination of the appended string
 * @s2: the string to add to s1
 * @n: the first number of element in s2
 * Return: returns the newly allocated
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l, len, len_s1 = 0, len_s2 = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		len_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		len_s2++;
	}
	if (n >= len_s2)
	{
		n = len_s2;
	}
	len = len_s1 + n;
	ptr = (char *) malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len_s1; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; l < n; l++)
	{
		ptr[len_s1 + l] = s2[l];
	}
	ptr[len_s1 + n] = '\0';
	return (ptr);
}
