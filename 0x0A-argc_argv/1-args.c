#include<stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: On success, 0
 */
int main(int argc, char *argv[])
{
    int i;
    printf("%d\n", argc);
    for(i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
