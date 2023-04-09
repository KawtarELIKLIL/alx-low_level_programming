#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of argument
 * @argv: name of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv[0];
	return (0);
}
