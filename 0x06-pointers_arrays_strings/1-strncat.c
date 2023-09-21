#include "main.h"
#include <string.h>
/**
 * *_strncat - concatenates two strings using at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = '\0';

	return (dest);
}
