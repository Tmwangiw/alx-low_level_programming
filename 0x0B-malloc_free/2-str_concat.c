#include "main.h"
#include <stdlib.h>
/**
 * str_concat - point to a newly allocated space in memory
 * @s1: string to be copied
 * @s2: new string
 *
 *Return: NULL on failure, empty string if NULL is passed
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	conct = malloc(sizeof(char) * (x + y + 1));
	if (conct == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		conct[x] = s2[y];
		x++, y++;
	}
	conct[x] = '\0';
	return (conct);
}
