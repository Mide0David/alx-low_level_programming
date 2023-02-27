#include "main.h"

/**
 * swap_int - exchange to var int 
 * @a: first var int
 * @b: second var int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
