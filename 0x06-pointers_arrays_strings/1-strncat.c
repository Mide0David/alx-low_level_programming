#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src)
{
	char *ptr = dest;
	while(*ptr)
	{
		p++;
	}
	while(*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
