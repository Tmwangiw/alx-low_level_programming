#include "main.h"
#include <string.h>
/**
 * *_strchr - function that locates a character in a string.
 * @s: pointer
 * @c: input
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int x;

	x = 0;
	while (s[x] != c && s[x] != '\0')
	{
		x++;
		if (s[x] == c)
		{
			return (s + x);
		}
		
	}
	
	return (NULL);
}
