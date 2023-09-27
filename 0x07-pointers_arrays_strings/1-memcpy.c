#include "main.h"
#include <string.h>
/**
 * *_memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
