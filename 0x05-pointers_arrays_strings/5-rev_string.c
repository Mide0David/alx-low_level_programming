#include "main.h"

/**
 * rev_string - reverses a string
 * @s: it receives the string to be reversed
 */
void rev_string(char *s)
{
	int i, j, k;
	char *a, aux;

	a = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		a++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
