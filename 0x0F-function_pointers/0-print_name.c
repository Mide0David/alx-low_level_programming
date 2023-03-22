#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name using pointer funtions
 * @name: string to use
 * @f: pointer funtion
 * Return: it returns nothing
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
