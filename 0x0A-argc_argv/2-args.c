#include <stdio.h>
/**
 * main - print name of arguments
 * @argc: number of argument
 * @argv: name of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
