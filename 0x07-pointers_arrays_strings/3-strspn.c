#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	int y;

	x = 0;
	y = 0;

	while (*s)
	{
		while (accept[y])
		{
			if (accept[y] == *s)
			{
				x++;
				break;
			}
			else if
			{
				((accept[y + 1]) == '\0')
				return (x);
			}
			y++;
		}
		s++;
	}
	return (x);
}
