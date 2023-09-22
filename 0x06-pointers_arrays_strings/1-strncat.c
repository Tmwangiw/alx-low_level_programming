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
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
