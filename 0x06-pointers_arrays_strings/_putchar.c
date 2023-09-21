#include "main.h"
#include <unistd>

/**
 * _putchar - write the character c to stdout
 * @c: character to print
 *
 * Return: On success 1
 * On error: -1 is returned, and errno is set ro appropriate.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
