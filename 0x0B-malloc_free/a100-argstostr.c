#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *argstostr(int ac, char **av)
{
	int i, j, str-len = 0;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str-len++;
		}
	}

	concat = (char *) malloc (str-len * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}




