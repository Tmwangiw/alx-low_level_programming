#include <stdlib.h>
/**
 * _strdup - returns a pointer to a duplicate of the string str
 * @str: string to copy
 *
 * Return: On success, a pointer to the duplicated string
 * NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int size = 0;
	char *x, *ret;

	if (!str)
		return (NULL);
	x = str;
	while (*x++)
		size++;
	ret = malloc(size + 1);

	if (!ret)
		return (NULL);
	x = ret;
	while (*str)
		*x++ = *str++;
	*x = 0;
	return (ret);
}
