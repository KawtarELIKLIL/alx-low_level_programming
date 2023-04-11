#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of argument
 * @argv: name of argument
 * Return: Always 0 and 1 if not digits
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
