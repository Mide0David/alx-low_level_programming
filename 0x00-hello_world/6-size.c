#include<stdio.h>

/**
 * main - start point to print the space size of each data type it the printf statment
 *
 * Return: 0 if the program ran successfully
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int li;
	float f;
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(li));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
