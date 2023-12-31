#include "main.h"
#include <string.h>
/**
 * *_memset - function that fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: starting address of memory
 * @b: input
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

