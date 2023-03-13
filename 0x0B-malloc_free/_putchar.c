<<<<<<< HEAD
#include "main.h"		
#include <unistd.h>
		
/**
		
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.	
=======
include "main.h"
#include <unistd.h>

/**

 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
>>>>>>> b80806a7904afd451407ef11350b6b5e4df14c42
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
<<<<<<< HEAD
	return (write(1, &c, 1));

=======
        return (write(1, &c, 1));
>>>>>>> b80806a7904afd451407ef11350b6b5e4df14c42
}
