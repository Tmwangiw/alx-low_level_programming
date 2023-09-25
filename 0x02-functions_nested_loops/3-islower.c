#include "main.h"
#include <ctype.h>
/**
 * _islower - function that checks for lowercase character
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
