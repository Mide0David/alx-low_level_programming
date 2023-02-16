#include<stdio.h>
#include<unistd.h>

/**
 * main - outputs to the stderr
 * 
 * Return: the value 1 if process is successful
 */
int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = sizeof(message) - 1;
    ssize_t written = write(2, message, len);
    return (written == len) ? 1 : -1;
}
