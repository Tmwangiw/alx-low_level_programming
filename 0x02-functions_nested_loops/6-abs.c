#include "main.h"
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer
 *@i: input
 *
 * Return: abs or 0
 */
int _abs(int i)
{
	int abs;

	if (i < 0)
	{
		abs = i * -1;

		return (abs);
	}
	return (i);
}
