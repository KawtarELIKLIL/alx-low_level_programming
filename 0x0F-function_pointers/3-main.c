#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*main - calculate
*@argc: num of arg
*@argv: the argument
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("ARGCError\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("ARGVError\n");
		exit(99);
	}
	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
