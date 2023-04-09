#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of argument
 * @argv: name of argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else 
		printf("Error\n");
	return (0);
}
