#include<stdio.h>
/**
 * main - prints all arguments it receives
 *@argc: number of command line arguments
 *@argv: array of strings
 *
 * Return: On success,0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("argv[%2d]: %s\n", i, argv[i]);

	return (0);
}
