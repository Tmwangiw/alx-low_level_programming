#include "main.h"
#include <string.h>
/**
 * *_strcat - concatenates two string and appends the src string to dest string
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 *@dest: destination string
 *@src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
