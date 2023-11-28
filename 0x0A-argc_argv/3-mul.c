#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of the multiplication
 * @argc: total number of command line arguments
 * @argv: array of arguments
 *
 * Return: On error, 1
 */
int main(int argc, char * argv[])
{
	int num1, num2;
	int result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
